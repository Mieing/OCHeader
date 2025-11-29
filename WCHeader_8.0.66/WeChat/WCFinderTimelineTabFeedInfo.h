@class NSString;

@interface WCFinderTimelineTabFeedInfo : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *tid;
@property (nonatomic) unsigned long long tabType;
@property (nonatomic) unsigned long long feedIndex;
@property (nonatomic) unsigned long long feedType;
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
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_tid;
+ (const void *)tabType;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_tabType;
+ (const void *)feedIndex;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_feedIndex;
+ (const void *)feedType;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_feedType;
+ (void)__wcdb_table_constraint_4:(void *)a0;
+ (void)__wcdb_table_constraint_5:(void *)a0;
+ (void)__wcdb_index_6:(void *)a0;

- (void).cxx_destruct;

@end
