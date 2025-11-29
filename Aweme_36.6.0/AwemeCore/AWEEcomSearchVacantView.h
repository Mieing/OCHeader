@class NSString, DUXButton, UILabel, UIImage, BDImageView;

@interface AWEEcomSearchVacantView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) DUXButton *button;
@property (retain, nonatomic) DUXButton *linkButton;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detail;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } linkRange;
@property (copy, nonatomic) id /* block */ linkBlock;
@property (copy, nonatomic) id /* block */ didClickButton;
@property (copy, nonatomic) id /* block */ didClickLinkAction;

- (void)setButtonText:(id)a0 clickAction:(id /* block */)a1;
- (void)didClickButtonAction;
- (void)didClickLinkButtonAction;
- (id)initWithImage:(id)a0 withTitle:(id)a1 withDetail:(id)a2;
- (void)setLinkText:(id)a0 clickAction:(id /* block */)a1;
- (void).cxx_destruct;
- (void)setImageSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
