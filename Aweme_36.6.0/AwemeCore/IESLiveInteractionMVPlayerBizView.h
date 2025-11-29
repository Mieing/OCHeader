@class CAGradientLayer, NSArray, IESLiveInteractionMVPlayerBizViewModel, NSString, UIView, NSMutableArray;

@interface IESLiveInteractionMVPlayerBizView : HTSEventForwardingView <IESLiveInteractionMVPlayerBizViewModelDelegate, IESLiveInteractionMVPlayerBizViewModelDataSource, CAAnimationDelegate>

@property (retain, nonatomic) IESLiveInteractionMVPlayerBizViewModel *viewModel;
@property (retain, nonatomic) CAGradientLayer *playerGradientLayer;
@property (retain, nonatomic) CAGradientLayer *backgroundGradientLayer;
@property (retain, nonatomic) UIView *playerMaskView;
@property (weak, nonatomic) UIView *playerView;
@property (retain, nonatomic) NSMutableArray *colorDataList;
@property (copy, nonatomic) NSArray *targetColors;
@property (copy, nonatomic) NSArray *targetColorsRGBValue;
@property (nonatomic) BOOL perfDowngrade;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBackgroundNotification;
- (id)sortColor:(id)a0;
- (void)shutDownColorBreatheAnimationLoop;
- (void)startBackgroundColorBreatheAnimation;
- (void)playerBizViewModel:(id)a0 didUpdateAtmosphereFrameColorData:(id)a1 startIndex:(unsigned long long)a2;
- (void)playerBizViewModel:(id)a0 performanceDegradeStateDidChange:(BOOL)a1;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithViewModel:(id)a0;
- (void)appDidEnterBackground:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)appWillEnterForeground:(id)a0;
- (void)setupViews;

@end
