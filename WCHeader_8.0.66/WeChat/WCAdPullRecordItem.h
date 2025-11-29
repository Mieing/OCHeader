@class NSString;

@interface WCAdPullRecordItem : MMObject <WCTTableCoding>

@property (nonatomic) unsigned int localId;
@property (retain, nonatomic) NSString *traceId;
@property (retain, nonatomic) NSString *aid;
@property (retain, nonatomic) NSString *snsId;
@property (nonatomic) unsigned int storeTime;
@property (nonatomic) unsigned int isAsync;
@property (nonatomic) unsigned int invalid;
@property (retain, nonatomic) NSString *sessionKey;
@property (retain, nonatomic) NSString *ext;
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
+ (const void *)localId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_localId;
+ (const void *)traceId;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_traceId;
+ (const void *)aid;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_aid;
+ (const void *)snsId;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_snsId;
+ (const void *)storeTime;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_storeTime;
+ (const void *)isAsync;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_isAsync;
+ (const void *)invalid;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_invalid;
+ (const void *)sessionKey;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_sessionKey;
+ (const void *)ext;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_ext;
+ (void)__wcdb_column_constraint_9:(void *)a0;
+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)modelPropertyWhitelistForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
