@class NSString;

@interface WAExptPermissionInfo : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *appID;
@property (nonatomic) long long issueTime;
@property (copy, nonatomic) NSString *opConfig;
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
+ (const void *)issueTime;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_issueTime;
+ (const void *)opConfig;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_opConfig;
+ (void)__wcdb_column_constraint_3:(void *)a0;

- (void).cxx_destruct;

@end
