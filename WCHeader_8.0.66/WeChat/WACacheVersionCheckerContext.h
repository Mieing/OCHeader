@class NSString, NSArray, WAPackageConfig, NSMutableArray;

@interface WACacheVersionCheckerContext : NSObject

@property (retain, nonatomic) WAPackageConfig *packageConfig;
@property (copy, nonatomic) NSString *relativeURL;
@property (nonatomic) BOOL preChecked;
@property (retain, nonatomic) NSMutableArray *needDownloadInfoDatas;
@property (nonatomic) BOOL inColdLaunch;
@property (nonatomic) unsigned int syncType;
@property (retain, nonatomic) NSArray *entryPackages;
@property (nonatomic) unsigned long long checkScene;
@property (nonatomic) unsigned long long openScene;
@property (copy, nonatomic) NSString *sceneNote;
@property (nonatomic) BOOL isSilentOpen;
@property (nonatomic) unsigned int silentOpenType;
@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) BOOL remoteMode;

- (void).cxx_destruct;

@end
