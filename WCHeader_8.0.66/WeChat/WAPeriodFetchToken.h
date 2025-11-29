@class NSString;

@interface WAPeriodFetchToken : MMObject <WCTTableCoding>

@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int lastSaveTime;
@property (retain, nonatomic) NSString *fetchToken;
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
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_userName;
+ (const void *)lastSaveTime;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_lastSaveTime;
+ (const void *)fetchToken;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_fetchToken;
+ (void)__wcdb_column_constraint_7:(void *)a0;

- (void).cxx_destruct;

@end
