@class NSString;

@interface WCTimelineFeedSegment : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int groupId;
@property (nonatomic) unsigned int feedsCount;
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
+ (const void *)__wcdb_synthesize_109:(void *)a0;
+ (id)swift_groupId;
+ (const void *)feedsCount;
+ (const void *)__wcdb_synthesize_110:(void *)a0;
+ (id)swift_feedsCount;
+ (const void *)topFeedId;
+ (const void *)__wcdb_synthesize_111:(void *)a0;
+ (id)swift_topFeedId;
+ (const void *)bottomFeedId;
+ (const void *)__wcdb_synthesize_112:(void *)a0;
+ (id)swift_bottomFeedId;
+ (void)__wcdb_column_constraint_113:(void *)a0;
+ (void)__wcdb_index_114:(void *)a0;
+ (void)__wcdb_column_constraint_115:(void *)a0;
+ (void)__wcdb_column_constraint_116:(void *)a0;

- (void).cxx_destruct;

@end
