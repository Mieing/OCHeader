@class AWEStudioComposerEditEffectLoadingConfig, AWEStudioComposerEffectLoadingTimestampManager, UIView;
@protocol ACCSequenceEditServiceProtocol, ACCTextLoadingViewProtcol, ACCEditSpecialEffectServiceProtocol;

@interface AWEStudioComposerEditEffectLoadingComponent : ACCFeatureComponent

@property (retain, nonatomic) AWEStudioComposerEditEffectLoadingConfig *featureConfig;
@property (nonatomic) BOOL shouldCallback;
@property (retain, nonatomic) UIView<ACCTextLoadingViewProtcol> *loadingView;
@property (retain, nonatomic) AWEStudioComposerEffectLoadingTimestampManager *timestampManager;
@property (weak, nonatomic) id<ACCEditSpecialEffectServiceProtocol> specialEffectService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentDidMount;
- (void)p_cancel;
- (void)p_dismissLoadingView;
- (void)p_trackCloseEventWithReason:(id)a0;
- (id)p_trackParams;
- (void)p_timeout;
- (void)p_error:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
