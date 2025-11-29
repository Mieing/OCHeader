@class UILabel, UIImageView;

@interface AWEProfilePreviewNickNameView : UIView

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *idLabel;
@property (retain, nonatomic) UIImageView *iconView;

- (id)idPrefixStr;
- (double)idLineHeight;
- (double)contentHeight;
- (void).cxx_destruct;
- (id)userModel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (id)nameTitle;
- (id)idStr;

@end
