@class NSString;

@interface WADBPluginCodeUsageLruInfo : NSObject

@property (retain, nonatomic) NSString *appID;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned int hit;
@property (nonatomic) unsigned int updateTime;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)appID;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_appID;
+ (const void *)version;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_version;
+ (const void *)hit;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_hit;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_updateTime;
+ (void)__wcdb_table_constraint_4:(void *)a0;
+ (void)__wcdb_table_constraint_5:(void *)a0;

- (void).cxx_destruct;

@end
