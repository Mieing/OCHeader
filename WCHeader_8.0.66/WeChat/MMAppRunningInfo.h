@interface MMAppRunningInfo : NSObject

@property (nonatomic) unsigned long long launchTime;
@property (nonatomic) unsigned long long currentTime;
@property (nonatomic) BOOL vacuumClean;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)launchTime;
+ (const void *)__wcdb_synthesize_35:(void *)a0;
+ (id)swift_launchTime;
+ (const void *)currentTime;
+ (const void *)__wcdb_synthesize_36:(void *)a0;
+ (id)swift_currentTime;
+ (const void *)vacuumClean;
+ (const void *)__wcdb_synthesize_37:(void *)a0;
+ (id)swift_vacuumClean;
+ (void)__wcdb_column_constraint_38:(void *)a0;

@end
