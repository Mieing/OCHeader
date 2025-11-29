@class NSString;

@interface WAPeriodFetchInfo : MMObject <WCTTableCoding>

@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int lastFetchTime;
@property (retain, nonatomic) NSString *fetchData;
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
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_userName;
+ (const void *)lastFetchTime;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_lastFetchTime;
+ (const void *)fetchData;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_fetchData;
+ (void)__wcdb_column_constraint_3:(void *)a0;

- (void).cxx_destruct;

@end
