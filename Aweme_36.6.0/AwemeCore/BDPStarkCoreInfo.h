@class NSString, NSArray;

@interface BDPStarkCoreInfo : NSObject

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) int version;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL isUseTmg;
@property (nonatomic) BOOL highPerformanceModeEnabled;
@property (nonatomic) BOOL useHighPerformancePlus;
@property (nonatomic) BOOL feedUseHighPerformancePlus;
@property (retain, nonatomic) NSArray *hppLaunchFromLocationBlacklist;
@property (nonatomic) unsigned long long xhrNativeBufferSize;
@property (retain, nonatomic) NSString *urlV2;
@property (retain, nonatomic) NSString *md5V2;
@property (nonatomic) BOOL enablePreload;
@property (nonatomic) BOOL enablePredefine;
@property (nonatomic) BOOL enableNativeLog;
@property (copy, nonatomic) NSString *frontendEnableVersion;
@property (nonatomic) BOOL enableNativeVConsole;
@property (retain, nonatomic) NSArray *nativeVConsoleBlackList;
@property (nonatomic) BOOL enableCombineLoadingView;
@property (retain, nonatomic) NSArray *combineLoadingViewBlackList;
@property (nonatomic) float combineLoadingViewUnityHintTextPercent;
@property (retain, nonatomic) NSString *combineLoadingViewUnityHintText;

- (void).cxx_destruct;

@end
