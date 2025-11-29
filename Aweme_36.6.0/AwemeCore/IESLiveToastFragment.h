@class IESLivePlayerTipViewModel, NSString, UIImageView, HTSEventForwardingView, UIView, UILabel, IESLiveCornerToastConfig;

@interface IESLiveToastFragment : IESLiveRoomComponent <IESLiveToastAction, IESLiveCustomAutoHideAnimAction, HTSLiveStreamPlayerAction, IESLiveFIFAPlayerScaleAction, HTSLiveCleanScreenActions>

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIView *controlToastHiddenView;
@property (retain, nonatomic) HTSEventForwardingView *container;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *customView;
@property (nonatomic) BOOL isVerticalStream;
@property (nonatomic) BOOL needLimitWidth;
@property (copy, nonatomic) id /* block */ hideComponentTask;
@property (retain, nonatomic) IESLiveCornerToastConfig *config;
@property (retain, nonatomic) IESLivePlayerTipViewModel *tipViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentOrientationTransitioning:(long long)a0;
- (void)componentOrientationChanged:(long long)a0;
- (void)changeCleanScreenMode:(long long)a0;
- (void)playerFrameDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onFIFAPannelSatusChange:(long long)a0;
- (void)landscapeViewsTransformToHidden:(BOOL)a0;
- (void)portraitViewsTransformToHidden:(BOOL)a0;
- (void)showText:(id)a0 delayTime:(double)a1;
- (void)showText:(id)a0 delayTime:(double)a1 hideCompletion:(id /* block */)a2;
- (void)showAttributeText:(id)a0;
- (void)showAttributeText:(id)a0 delayTime:(double)a1 cutWidth:(BOOL)a2;
- (void)showCustomSubview:(id)a0 delayTime:(double)a1;
- (void)showCustomSubview:(id)a0 delayTime:(double)a1 priority:(unsigned long long)a2;
- (void)showAndDelayToHideContainer:(double)a0;
- (void)showAndDelayToHideContainer;
- (BOOL)mountReady;
- (void)showAttributeText:(id)a0 delayTime:(double)a1 cutWidth:(BOOL)a2 hideCompletion:(id /* block */)a3;
- (void)showAndDelayToHideContainer:(double)a0 hideCompletion:(id /* block */)a1;
- (void)showText:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setupView;
- (void)hideImmediately;
- (BOOL)showingToast;

@end
