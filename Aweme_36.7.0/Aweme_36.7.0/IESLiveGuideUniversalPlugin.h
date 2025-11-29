@class IESLiveGuideContainerContext;

@interface IESLiveGuideUniversalPlugin : IESLiveContainerBasePlugin

@property (retain, nonatomic) IESLiveGuideContainerContext *containerContext;
@property (nonatomic) BOOL willGotoVideoLive;

- (void)loadEnhanceAlgorithmIfNeeded:(BOOL)a0;
- (void)didLoad:(id)a0;
- (void)willDestroy:(id)a0;
- (void)subscribeExecutionMessage;
- (void)switchToOtherTab;
- (void)switchToLiveTab;
- (void)handleCloseGuideVC:(BOOL)a0;
- (void)closeForwardAudienceRoom;
- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
