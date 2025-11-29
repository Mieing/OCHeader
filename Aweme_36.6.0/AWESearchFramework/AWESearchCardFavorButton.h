@class AWESearchCardFavorModel, UIView;
@protocol _TtP9AWELottie13AWELottieView_;

@interface AWESearchCardFavorButton : AWESearchCardInteractorButton

@property (retain, nonatomic) AWESearchCardFavorModel *model;
@property (nonatomic) BOOL favorAnimationInProgress;
@property (retain, nonatomic) UIView<_TtP9AWELottie13AWELottieView_> *favoriteAnimationView;

+ (id)emptyDescWhenNumZero;

- (void)removeAnimation;
- (void)updateFavorCount;
- (void)addFavorAnimation;
- (void)addUnFavorAnimation;
- (void)stopFavorAnimation;
- (void)stopUnFavorAnimation;
- (void)startFavorAnimation;
- (void)startUnFavorAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;

@end
