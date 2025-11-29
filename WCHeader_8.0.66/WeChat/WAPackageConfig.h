@class NSString, NSArray, NSDictionary;

@interface WAPackageConfig : NSObject

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int appServiceType;
@property (nonatomic) unsigned int debugModeType;
@property (nonatomic) unsigned int appVersion;
@property (retain, nonatomic) NSString *packageMd5;
@property (retain, nonatomic) NSString *loadingImgUrl;
@property (retain, nonatomic) NSString *loadingImgUrlProgressbarColor;
@property (nonatomic) unsigned int debugFrom;
@property (retain, nonatomic) NSString *debugPackageUrl;
@property (nonatomic) unsigned int debugDevKey;
@property (retain, nonatomic) NSString *deviceOrientation;
@property (nonatomic) BOOL isServerAllowUseModule;
@property (retain, nonatomic) NSArray *arrModuleList;
@property (retain, nonatomic) NSString *entranceModule;
@property (retain, nonatomic) NSDictionary *dicClientJsExtInfo;
@property (retain, nonatomic) NSString *withoutLibMd5;
@property (retain, nonatomic) NSArray *arrPluginCodeInfo;
@property (retain, nonatomic) NSArray *arrWidgetInfo;
@property (retain, nonatomic) NSString *withoutLibUrl;
@property (nonatomic) unsigned int templateID;

+ (BOOL)isModuleInfoValid:(id)a0;

- (id)initWithContact:(id)a0;
- (id)initWithDebugNotifyInfo:(id)a0;
- (id)description;
- (BOOL)isWeAppUseModule;
- (id)getModuleInfoWithName:(id)a0;
- (id)validModuleNameFromPagePath:(id)a0;
- (id)parallelDownloadOnLaunchModuleNames;
- (BOOL)isPathInIndependentModule:(id)a0;
- (BOOL)isModuleNameIndependentModule:(id)a0;
- (BOOL)isUnspecificedFileNameWithPagePath:(id)a0;
- (BOOL)isPagePath:(id)a0 matchModuleName:(id)a1;
- (BOOL)isPagePath:(id)a0 matchAliasName:(id)a1;
- (id)pathComponentsWithoutFileSeperator:(id)a0;
- (id)entranceModuleName;
- (BOOL)isUseGameSeperatedPluginCodes;
- (BOOL)isUseWeappSeperatedPluginCodes;
- (BOOL)isUseMultiSeperatedPluginCodes;
- (BOOL)isModuleUseMultiPluginCodes:(id)a0;
- (BOOL)isModuleUseGameSeperatedPluginCodes:(id)a0;
- (BOOL)isModuleUseWeappSeperatedPluginCodes:(id)a0;
- (BOOL)isModuleUseSeperatedPluginCodes:(id)a0;
- (BOOL)isModuleUseSeperatedMultiPluginCodes:(id)a0;
- (id)separatedPluginsWithModuleName:(id)a0;
- (id)separatedPluginsInfoWithPluginList:(id)a0 moduleName:(id)a1;
- (BOOL)isGameApp;
- (void).cxx_destruct;

@end
