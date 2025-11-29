@class NSString;

@interface MMWebViewPlugin_WebNavigationPerf : MMWebViewPluginBase

@property (nonatomic) unsigned long long viewControllerCreateTimeInMs;
@property (nonatomic) unsigned long long viewControllerCreateEndTimeInMs;
@property (nonatomic) unsigned long long webviewCreateTimeInMs;
@property (nonatomic) unsigned long long webviewCreateEndTimeInMs;
@property (nonatomic) unsigned long long lastGetA8KeyTimeInMs;
@property (nonatomic) unsigned long long lastGetA8KeyEndTimeInMs;
@property (nonatomic) unsigned long long firstNavigationRedirectCount;
@property (retain, nonatomic) NSString *firstCommitNavigationURLString;
@property (copy, nonatomic) NSString *firstCommitNavigationPerfReportString;

- (id)init;
- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)firstNavigationPerf_onGetA8KeyStart:(id)a0;
- (void)firstNavigationPerf_onGetA8KeyEnd:(id)a0;
- (void)firstNavigationPerf_navigationRecieveRedirect:(id)a0;
- (void)firstNavigationPerf_commitNavigation:(id)a0;
- (void)onWebViewPageNavigationPerfReport:(id)a0;
- (void)log18497FirstNavigationPerformanceStat;
- (void)common_navigationFinished:(id)a0;
- (void)tryInjectNavigationOptimazationToDebugConsole;
- (unsigned long long)__calDurantionForEventTimeInMs:(unsigned long long)a0;
- (void).cxx_destruct;

@end
