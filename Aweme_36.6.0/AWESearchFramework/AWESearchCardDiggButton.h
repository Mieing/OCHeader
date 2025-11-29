@class AWESearchCardDiggModel, UIView;
@protocol _TtP9AWELottie13AWELottieView_;

@interface AWESearchCardDiggButton : AWESearchCardInteractorButton

@property (retain, nonatomic) AWESearchCardDiggModel *model;
@property (retain, nonatomic) UIView<_TtP9AWELottie13AWELottieView_> *diggAnimationView;
@property (nonatomic) BOOL diggAnimationInProgress;

+ (id)emptyDescWhenNumZero;

- (void)updateDiggCount;
- (void)startDiggAnimation;
- (void)removeAnimation;
- (void)addDiggAnimation;
- (void)addUnDiggAnimation;
- (void)stopDiggAnimation;
- (void)startUnDiggAnimation;
- (void)stopUndiggAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;

@end
