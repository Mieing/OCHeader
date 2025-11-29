@class UIImageView, UILabel;

@interface AWEIMPanelFlameGuideImageView : AWEIMPanelView

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *flameIcon;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *chatDaysLabel;
@property (retain, nonatomic) UILabel *textLabel;

- (void)renderWithViewModel:(id)a0;
- (double)p_calculateChatDaysLabelFontSizeWithText:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
