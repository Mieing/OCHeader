@class LOTAnimationView, UIView;

@interface AWESearchAIGCSkeletonView : AWESearchCachalotBaseCardView

@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (retain, nonatomic) UIView *backgroundView;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (BOOL)enableSearchAIPadStyle;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)componentView;
- (void)createUI;

@end
