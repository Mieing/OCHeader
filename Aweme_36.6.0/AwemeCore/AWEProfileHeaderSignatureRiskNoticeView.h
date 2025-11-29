@class UIImageView, UILabel;

@interface AWEProfileHeaderSignatureRiskNoticeView : UIView

@property (copy, nonatomic) id /* block */ clickActionBlock;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *noticeLabel;

+ (double)computedHeightWithNoticeMessage:(id)a0 hasAction:(BOOL)a1 maxWidth:(double)a2;
+ (id)clickableNoticeMessageWithOriginText:(id)a0;
+ (id)labelFont;
+ (double)iconWidth;
+ (id)fontColor;

- (void)__setupUI;
- (void)tapGestureAction;
- (void)configWithNoticeMessage:(id)a0 clickActionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
