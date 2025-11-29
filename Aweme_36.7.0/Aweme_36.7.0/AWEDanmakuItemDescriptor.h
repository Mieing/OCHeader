@class AWEDanmakuItemViewModel, NSString, AWEVideoPlayDanmakuModel, AWEDanmakuItemCommonView;

@interface AWEDanmakuItemDescriptor : DDanmakuItemDescriptor <AWEDanmakuItemCommonViewDelegate, CAAnimationDelegate, AWEDanmakuItemDescriptorProtocol>

@property (retain, nonatomic) AWEDanmakuItemCommonView *danmakuView;
@property (retain, nonatomic) AWEVideoPlayDanmakuModel *danmakuModel;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) AWEDanmakuItemViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didDisplay;
- (void)handleDanmakuDiggStatusChangeWithBlock:(id /* block */)a0 needAnimation:(BOOL)a1;
- (BOOL)clickPointIsInDiggNumViewWithClickPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)pauseAnimationWithCompletionBlock:(id /* block */)a0;
- (id)initWithMetaData:(id)a0;
- (void)handleDanmakuViewTap:(id)a0;
- (BOOL)shouldDiggImageOvert;
- (BOOL)needShowOwnerBorder;
- (void)updateOwnerBorderWithNeedShow:(BOOL)a0;
- (BOOL)shouldBlockHandle;
- (void)danmakuAnimationInfoDetection:(id)a0 danmakuView:(id)a1 danmakuModel:(id)a2 distanceRatio:(double)a3;
- (void)p_cleanForAnimationCompletion;
- (void)animationDidStart:(id)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)resumeAnimation;
- (void)prepareForReuse;
- (void)reset;
- (void)resume;
- (void)setItemView:(id)a0;
- (void)didEndDisplaying;

@end
