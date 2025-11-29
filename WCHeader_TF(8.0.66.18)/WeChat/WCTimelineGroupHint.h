@class NSString;

@interface WCTimelineGroupHint : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int groupId;
@property (retain, nonatomic) NSString *topFeedId;
@property (retain, nonatomic) NSString *bottomFeedId;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)groupId;
+ (const void *)__wcdb_synthesize_86:(void *)a0;
+ (id)swift_groupId;
+ (const void *)topFeedId;
+ (const void *)__wcdb_synthesize_87:(void *)a0;
+ (id)swift_topFeedId;
+ (const void *)bottomFeedId;
+ (const void *)__wcdb_synthesize_88:(void *)a0;
+ (id)swift_bottomFeedId;
+ (void)__wcdb_column_constraint_89:(void *)a0;
+ (void)__wcdb_index_90:(void *)a0;
+ (void)__wcdb_column_constraint_91:(void *)a0;
+ (void)__wcdb_column_constraint_92:(void *)a0;
+ (void)__wcdb_column_constraint_93:(void *)a0;

- (void).cxx_destruct;

@end
