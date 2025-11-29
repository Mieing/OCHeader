@class UIImageView, YYLabel, UIView;

@interface AFDStoryWorkListVisibleHeaderView : UIView

@property (retain, nonatomic) UIView *boxView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) YYLabel *titleLabel;

+ (struct CGSize { double x0; double x1; })currentTextFrameWithWidth:(double)a0;
+ (long long)fontClass;
+ (id)generateStoryFooterText;
+ (long long)fontWeight;

- (void)initView;
- (void)setVisibleTips:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
