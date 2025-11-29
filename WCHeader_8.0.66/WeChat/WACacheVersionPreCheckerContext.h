@class WACacheVersionPreCheckerContextResult, NSString, WAContact, WACacheVersionPreChecker, WAPackageConfig, WAAppTaskExtInfo, NSArray;

@interface WACacheVersionPreCheckerContext : NSObject

@property (retain, nonatomic) WACacheVersionPreChecker *preChecker;
@property (retain, nonatomic) WAContact *contact;
@property (retain, nonatomic) WAPackageConfig *packageConfig;
@property (retain, nonatomic) WAAppTaskExtInfo *taskExtInfo;
@property (nonatomic) unsigned int scene;
@property (copy, nonatomic) NSString *relativeURL;
@property (copy, nonatomic) NSString *instanceId;
@property (nonatomic) BOOL inColdLaunch;
@property (nonatomic) BOOL isSilentOpoen;
@property (nonatomic) unsigned int syncType;
@property (retain, nonatomic) NSArray *entryPackages;
@property (retain, nonatomic) NSArray *parallelDownloadModuleNames;
@property (retain, nonatomic) WACacheVersionPreCheckerContextResult *checkResult;

+ (id)genPreCheckerIdentifierWithAppid:(id)a0 appVersion:(unsigned long long)a1 debugType:(unsigned int)a2;

- (void).cxx_destruct;

@end
