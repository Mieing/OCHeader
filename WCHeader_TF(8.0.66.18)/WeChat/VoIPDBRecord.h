@class NSString;

@interface VoIPDBRecord : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *contactUserName;
@property (nonatomic) unsigned int sdkMode;
@property (nonatomic) unsigned int expireTime;
@property (nonatomic) unsigned int liveTime;
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
+ (const void *)contactUserName;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_contactUserName;
+ (const void *)sdkMode;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_sdkMode;
+ (const void *)expireTime;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_expireTime;
+ (const void *)liveTime;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_liveTime;
+ (void)__wcdb_table_constraint_5:(void *)a0;
+ (void)__wcdb_table_constraint_6:(void *)a0;
+ (void)__wcdb_table_constraint_7:(void *)a0;
+ (void)__wcdb_table_constraint_8:(void *)a0;

- (void).cxx_destruct;

@end
