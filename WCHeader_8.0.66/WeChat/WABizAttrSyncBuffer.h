@class NSString, NSData;

@interface WABizAttrSyncBuffer : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int lastUpdateTime;
@property (retain, nonatomic) NSData *version;
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
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_userName;
+ (const void *)lastUpdateTime;
+ (const void *)__wcdb_synthesize_10:(void *)a0;
+ (id)swift_lastUpdateTime;
+ (const void *)version;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (id)swift_version;
+ (void)__wcdb_column_constraint_12:(void *)a0;

- (void).cxx_destruct;

@end
