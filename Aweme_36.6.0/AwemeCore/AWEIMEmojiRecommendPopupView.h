@class UIImageView, UILabel, UIButton;

@interface AWEIMEmojiRecommendPopupView : AWEIMBasePopupView

@property (retain, nonatomic) UIImageView *avatarImgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *settingButton;

+ (BOOL)isShowing;

- (void)showTitle:(id)a0 subTitle:(id)a1 setting:(id)a2 confirm:(id)a3;
- (void)showTitle:(id)a0 subTitle:(id)a1 setting:(id)a2;
- (void)p_setupUITitle:(id)a0 subTitle:(id)a1 setting:(id)a2 confirm:(id)a3;
- (id)contentAttributedStringWithString:(id)a0;
- (id)settingAttributedStringWithString:(id)a0;
- (void)settingButtonClick:(id)a0;
- (void).cxx_destruct;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
