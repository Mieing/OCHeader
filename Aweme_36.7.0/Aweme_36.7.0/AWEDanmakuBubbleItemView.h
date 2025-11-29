@class UIImageView, UILabel;

@interface AWEDanmakuBubbleItemView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *descLabel;
@property (nonatomic) BOOL needShowLabel;

+ (double)descLabelHeight;
+ (id)descLabelFont;
+ (double)edgeTopMargin;
+ (double)viewMargin;

- (void)setUI;
- (void)showDiggAnimationIfNeed:(id)a0;
- (id)initWithImage:(id)a0 descText:(id)a1 width:(double)a2 needShowLabel:(BOOL)a3;
- (void).cxx_destruct;

@end
