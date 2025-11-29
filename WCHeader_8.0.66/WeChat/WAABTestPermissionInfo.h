@class NSString, NSData;

@interface WAABTestPermissionInfo : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSData *control_bytes;
@property (nonatomic) unsigned int appType;
@property (nonatomic) unsigned int versionType;
@property (retain, nonatomic) NSData *game_rewards_data;
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
+ (const void *)control_bytes;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_control_bytes;
+ (const void *)appType;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_appType;
+ (const void *)versionType;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_versionType;
+ (const void *)game_rewards_data;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_game_rewards_data;
+ (void)__wcdb_column_constraint_5:(void *)a0;

- (void).cxx_destruct;

@end
