@class NSArray, NSString, UIView, NSMutableArray, DUXBaseLabel;

@interface AWESearchPromotionRollingSalesView : AWESearchLinearGradientView

@property (retain, nonatomic) UIView *avatarContainerView;
@property (retain, nonatomic) DUXBaseLabel *textLabel;
@property (retain, nonatomic) UIView *numbersContainerView;
@property (retain, nonatomic) NSArray *avatars;
@property (retain, nonatomic) NSString *numberString;
@property (retain, nonatomic) NSString *labelText;
@property (retain, nonatomic) NSMutableArray *numScrollViewCache;

- (void)configUI;
- (id)dequeueScrollView;
- (void)startAnimation:(id)a0 beginT:(double)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;

@end
