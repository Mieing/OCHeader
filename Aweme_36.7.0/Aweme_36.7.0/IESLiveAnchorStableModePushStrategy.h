@class IESLiveStableModeStrategy, HTSEventContext;

@interface IESLiveAnchorStableModePushStrategy : NSObject

@property (nonatomic) BOOL isStableModeV2Enable;
@property (retain, nonatomic) IESLiveStableModeStrategy *fairStrategy;
@property (retain, nonatomic) IESLiveStableModeStrategy *stableModePushStrategy;
@property (retain, nonatomic) IESLiveStableModeStrategy *liveRestartPushStrategy;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ decisionLevelUpdateBlock;
@property (copy, nonatomic) id /* block */ pushShowedCompletion;

- (id)initWithStableModeV2Enable:(BOOL)a0;
- (void)registerPushStrategy;
- (void)createFairStrategy;
- (void)createStableModePushStrategy;
- (void)createLiveRestartPushStrategy;
- (void)updateAnchorStableModeLevel:(long long)a0 decisionFactor:(id)a1;
- (void)showPushIfNeed:(long long)a0 decisionFactor:(id)a1;
- (BOOL)shouldShowStableModePushView;
- (BOOL)shouldShowStableModeDetail;
- (void)recordStableModePushTime;
- (void)recordStableModeDetailShowed;
- (BOOL)shouldShowRestartPushView;
- (void)recordRestartPushViewHasShowed;
- (void)trackPushShowedWithSource:(id)a0;
- (void).cxx_destruct;

@end
