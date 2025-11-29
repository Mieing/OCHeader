@class NSString;

@interface WCFinderFeedSessionModel : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *tid;
@property (nonatomic) int scene;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (nonatomic) unsigned long long cacheTime;
@property (nonatomic) unsigned long long exposeTimeInMS;
@property (nonatomic) unsigned long long exposeCount;
@property (retain, nonatomic) NSString *extraKey;
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
+ (const void *)sessionBuffer;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_sessionBuffer;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_scene;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_cacheTime;
+ (const void *)extraKey;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_extraKey;
+ (void)__wcdb_table_constraint_5:(void *)a0;
+ (void)__wcdb_table_constraint_6:(void *)a0;
+ (void)__wcdb_table_constraint_7:(void *)a0;
+ (void)__wcdb_index_8:(void *)a0;
+ (void)__wcdb_index_9:(void *)a0;
+ (void)__wcdb_column_constraint_10:(void *)a0;
+ (void)__wcdb_column_constraint_11:(void *)a0;

- (void).cxx_destruct;

@end
