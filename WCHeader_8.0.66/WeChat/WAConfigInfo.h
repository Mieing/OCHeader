@class NSString, NSData;

@interface WAConfigInfo : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *appID;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSData *configData;
@property (nonatomic) unsigned int updateTime;
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
+ (const void *)appID;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_appID;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_type;
+ (const void *)version;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_version;
+ (const void *)configData;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_configData;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_updateTime;
+ (void)__wcdb_table_constraint_5:(void *)a0;
+ (void)__wcdb_table_constraint_6:(void *)a0;

- (void).cxx_destruct;

@end
