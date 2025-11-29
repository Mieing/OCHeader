@class NSString;

@interface WCMicroMerchantFeed : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *feedId;
@property (retain, nonatomic) NSString *groupId;
@property (nonatomic) unsigned int groupTime;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *titleV2;
@property (nonatomic) int topFeedType;
@property (nonatomic) unsigned int realWsVersion;
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
+ (const void *)feedId;
+ (const void *)__wcdb_synthesize_94:(void *)a0;
+ (id)swift_feedId;
+ (const void *)groupId;
+ (const void *)__wcdb_synthesize_95:(void *)a0;
+ (id)swift_groupId;
+ (const void *)groupTime;
+ (const void *)__wcdb_synthesize_96:(void *)a0;
+ (id)swift_groupTime;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_97:(void *)a0;
+ (id)swift_username;
+ (const void *)title;
+ (const void *)__wcdb_synthesize_98:(void *)a0;
+ (id)swift_title;
+ (const void *)status;
+ (const void *)__wcdb_synthesize_99:(void *)a0;
+ (id)swift_status;
+ (const void *)titleV2;
+ (const void *)__wcdb_synthesize_100:(void *)a0;
+ (id)swift_titleV2;
+ (const void *)topFeedType;
+ (const void *)__wcdb_synthesize_101:(void *)a0;
+ (id)swift_topFeedType;
+ (const void *)realWsVersion;
+ (const void *)__wcdb_synthesize_102:(void *)a0;
+ (id)swift_realWsVersion;
+ (void)__wcdb_column_constraint_103:(void *)a0;
+ (void)__wcdb_column_constraint_104:(void *)a0;
+ (void)__wcdb_column_constraint_105:(void *)a0;
+ (void)__wcdb_column_constraint_106:(void *)a0;
+ (void)__wcdb_index_107:(void *)a0;
+ (void)__wcdb_column_constraint_108:(void *)a0;

- (void).cxx_destruct;

@end
