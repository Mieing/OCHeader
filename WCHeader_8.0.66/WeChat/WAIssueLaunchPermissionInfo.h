@class NSString, NSData;

@interface WAIssueLaunchPermissionInfo : MMObject <WCTTableCoding>

@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSString *sceneListStr;
@property (nonatomic) unsigned int beginTime;
@property (nonatomic) unsigned int endTime;
@property (retain, nonatomic) NSData *launchResponseData;
@property (nonatomic) unsigned int reportId;
@property (retain, nonatomic) NSString *username;
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
+ (const void *)sceneListStr;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_sceneListStr;
+ (const void *)beginTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_beginTime;
+ (const void *)endTime;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_endTime;
+ (const void *)launchResponseData;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_launchResponseData;
+ (const void *)reportId;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_reportId;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_username;
+ (void)__wcdb_column_constraint_7:(void *)a0;
+ (void)__wcdb_index_8:(void *)a0;

- (void).cxx_destruct;

@end
