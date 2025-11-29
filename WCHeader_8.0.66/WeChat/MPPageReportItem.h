@class NSString;

@interface MPPageReportItem : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int itemId;
@property (nonatomic) long long reportTime;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) unsigned int a8KeyScene;
@property (nonatomic) unsigned int enterScene;
@property (nonatomic) unsigned int enterSubscene;
@property (copy, nonatomic) NSString *sessionId;
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
+ (const void *)itemId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_itemId;
+ (const void *)reportTime;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_reportTime;
+ (const void *)url;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_url;
+ (const void *)a8KeyScene;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_a8KeyScene;
+ (const void *)enterScene;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_enterScene;
+ (const void *)enterSubscene;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_enterSubscene;
+ (const void *)sessionId;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_sessionId;
+ (void)__wcdb_column_constraint_7:(void *)a0;
+ (void)__wcdb_index_8:(void *)a0;

- (void).cxx_destruct;

@end
