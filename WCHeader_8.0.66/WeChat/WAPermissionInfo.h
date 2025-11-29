@class NSData, WAPermissionLaunchAction, NSString, WAStatePermissionBytes, WAPermissionActionSheetInfo, WAPermissionWeAppBindInfo, WAPublicResInfo, WAPermissionLaunchRuntimeInfo;

@interface WAPermissionInfo : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSData *permissionBytes;
@property (retain, nonatomic) WAPermissionWeAppBindInfo *weAppBindInfo;
@property (retain, nonatomic) WAPermissionLaunchAction *launchAction;
@property (retain, nonatomic) WAPermissionActionSheetInfo *actionSheetInfo;
@property (retain, nonatomic) WAPermissionLaunchRuntimeInfo *runtimeInfo;
@property (retain, nonatomic) WAStatePermissionBytes *statePermissionBytes;
@property (retain, nonatomic) NSString *permissionJsonStr;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int requestType;
@property (retain, nonatomic) NSString *opConfig;
@property (nonatomic) unsigned long long expirationTime;
@property (retain, nonatomic) NSString *openId;
@property (nonatomic) long long updateCostTime;
@property (retain, nonatomic) WAPublicResInfo *pubResInfo;
@property (nonatomic) BOOL showThirdBusiTips;
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
+ (const void *)permissionBytes;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_permissionBytes;
+ (const void *)weAppBindInfo;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_weAppBindInfo;
+ (const void *)launchAction;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_launchAction;
+ (const void *)actionSheetInfo;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_actionSheetInfo;
+ (const void *)statePermissionBytes;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_statePermissionBytes;
+ (const void *)permissionJsonStr;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_permissionJsonStr;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_username;
+ (const void *)opConfig;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_opConfig;
+ (const void *)expirationTime;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_expirationTime;
+ (const void *)openId;
+ (const void *)__wcdb_synthesize_10:(void *)a0;
+ (id)swift_openId;
+ (const void *)runtimeInfo;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (id)swift_runtimeInfo;
+ (void)__wcdb_column_constraint_12:(void *)a0;
+ (void)__wcdb_index_13:(void *)a0;

- (void).cxx_destruct;

@end
