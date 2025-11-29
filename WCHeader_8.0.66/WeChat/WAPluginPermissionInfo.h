@class NSString, NSData, WAPluginStatePermissionBytes;

@interface WAPluginPermissionInfo : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSData *control_bytes;
@property (retain, nonatomic) WAPluginStatePermissionBytes *state_bytes;
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
+ (const void *)state_bytes;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_state_bytes;
+ (void)__wcdb_column_constraint_3:(void *)a0;

- (void).cxx_destruct;

@end
