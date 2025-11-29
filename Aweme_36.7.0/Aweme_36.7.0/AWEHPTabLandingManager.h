@class AWEHPLandingTabRollBackTask, AWEHPTabLandingTask;

@interface AWEHPTabLandingManager : NSObject

@property (retain, nonatomic) AWEHPTabLandingTask *unreadyTask;
@property (retain, nonatomic) AWEHPTabLandingTask *currentTask;
@property (retain, nonatomic) AWEHPTabLandingTask *lastTask;
@property (retain, nonatomic) AWEHPLandingTabRollBackTask *currentRollBackTask;
@property (readonly, nonatomic) BOOL hasReady;

+ (id)sharedInstance;

- (void)canLandingTabWithModel:(id)a0 completionBlock:(id /* block */)a1;
- (void)landingTabWithModel:(id)a0 config:(id)a1 completionBlock:(id /* block */)a2 exitBlock:(id /* block */)a3;
- (id)currentTabID;
- (void)p_prepareLandingTabWithTask:(id)a0;
- (void)p_landingTabWithTask:(id)a0;
- (void)p_beginUpdateSelectedChannelPerfMetricsMonitor:(id)a0 completion:(id /* block */)a1;
- (id)p_generateRollBackTaskWithLandingTask:(id)a0;
- (void)p_endUpdateSelectedChannelPerfMetricsMonitor:(id)a0 fromChannelId:(id)a1;
- (void)p_cancelUpdateSelectedChannelPerfMetricsMonitor:(id)a0 fromChannelId:(id)a1;
- (BOOL)canTransferToURL;
- (BOOL)p_needAvoidOtherBizComponentWithTabID:(id)a0 params:(id)a1;
- (BOOL)p_stashCurrentTabAndVCStackWithLandingTab:(id)a0 task:(id)a1;
- (id)p_generateFrameRollBackStyleConfigWithTask:(id)a0 landingTab:(id)a1;
- (void)trackShowWithTask:(id)a0 result:(long long)a1;
- (void)trackClickWithTask:(id)a0;
- (void)executeRollBackWithTask:(id)a0;
- (void)trackDismissWithTask:(id)a0 type:(long long)a1;
- (void)p_executeRollBackWithTask:(id)a0;
- (void)p_resumeSecondPageWithTask:(id)a0;
- (void)p_presentVCStack:(id)a0 byPresentingVC:(id)a1 bizType:(id)a2 completion:(id /* block */)a3;
- (id)dismissTypeDict;
- (void)setupLandingReady;
- (void).cxx_destruct;
- (id)init;
- (void)didReceiveMemoryWarning:(id)a0;
- (void)appDidEnterBackground:(id)a0;
- (void)dealloc;

@end
