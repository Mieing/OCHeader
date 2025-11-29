@class UIImageView, NSString, AFDStoryDiverseDiggNormalLikeCellModel;

@interface AFDStoryDiverseDiggBottomBarNormalLikeCell : UICollectionViewCell <CAAnimationDelegate>

@property (retain, nonatomic) UIImageView *outlinedHeartView;
@property (retain, nonatomic) UIImageView *filledHeartView;
@property (retain, nonatomic) AFDStoryDiverseDiggNormalLikeCellModel *viewModel;
@property (nonatomic) BOOL isAnimationPlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playAnimationWithUserDigged:(BOOL)a0;
- (void)animationDidStart:(id)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
