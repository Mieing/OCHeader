@class UIImageView, UIView, IESLiveGradientView, UILabel;

@interface IESLiveGiftFaceEffectTipFullWidthView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) IESLiveGradientView *backgroundGradientView;
@property (retain, nonatomic) UIImageView *tipImageView;
@property (retain, nonatomic) UILabel *tipTextLabel;
@property (nonatomic) struct CGSize { double width; double height; } size;

- (void)updateTitleText:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1;
- (void)setupUI;

@end
