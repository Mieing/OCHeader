@class NSMutableDictionary;

@interface AWEHPPitayaPreloadManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *latestPreloadTimeDic;

+ (id)sharedInstance;

- (id)handlePitayaMessage:(id)a0;
- (BOOL)checkTabPreloadTimeLimit:(id)a0;
- (void)startPreloadForBottomTab:(id)a0;
- (void)startPreloadForTopTab:(id)a0;
- (void)prepareContentViewControllerForTopTab:(id)a0;
- (id)handlePitayaTabRecycleMessage:(id)a0;
- (id)handlePitayaTabStatusMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
