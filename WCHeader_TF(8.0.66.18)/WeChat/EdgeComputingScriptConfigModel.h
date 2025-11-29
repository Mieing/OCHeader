@class NSString, NSArray;

@interface EdgeComputingScriptConfigModel : MMObject <PBCoding, NSCopying>

@property (retain, nonatomic) NSString *configID;
@property (nonatomic) unsigned int dataSourceType;
@property (nonatomic) unsigned int dataSourceID;
@property (nonatomic) unsigned int reportID;
@property (retain, nonatomic) NSArray *fieldConfigModels;
@property (nonatomic) unsigned int isInstantReport;
@property (nonatomic) unsigned int reportMethod;
@property (nonatomic) unsigned int dbExpireTime;
@property (retain, nonatomic) NSString *scriptURL;
@property (retain, nonatomic) NSString *script;
@property (retain, nonatomic) NSString *originalJson;
@property (nonatomic) unsigned int runPeriod;
@property (nonatomic) unsigned int isRepeat;
@property (retain, nonatomic) NSString *scriptMD5;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_configID;
+ (void)PBArrayAdd_dataSourceType;
+ (void)PBArrayAdd_dataSourceID;
+ (void)PBArrayAdd_reportID;
+ (void)PBArrayAdd_fieldConfigModels;
+ (void)PBArrayAdd_isInstantReport;
+ (void)PBArrayAdd_dbExpireTime;
+ (void)PBArrayAdd_script;
+ (void)PBArrayAdd_originalJson;
+ (void)PBArrayAdd_runPeriod;
+ (void)PBArrayAdd_isRepeat;
+ (void)PBArrayAdd_scriptMD5;
+ (void)PBArrayAdd_reportMethod;
+ (void)PBArrayAdd_scriptURL;
+ (void)initialize;

@end
