@class BDUGFlowAuthToken;

@interface AWEDesktopGuideMinimizeAppMonitorUtil : NSObject

@property (retain, nonatomic) BDUGFlowAuthToken *token;

+ (id)sharedInstance;

- (void)onAppDidBecomeActive;
- (void)performMinimizeAppWithInstallName:(id)a0;
- (void).cxx_destruct;

@end
