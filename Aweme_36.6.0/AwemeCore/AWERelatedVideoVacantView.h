@class NSString, UIImageView, UIImage, UILabel, DUXButton;

@interface AWERelatedVideoVacantView : UIView <AWERelatedVideoVacantViewProtocol>

@property (retain, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detail;
@property (copy, nonatomic) NSString *hint;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) id /* block */ didClickButton;
@property (copy, nonatomic) id /* block */ didClickLinkAction;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) DUXButton *button;
@property (retain, nonatomic) DUXButton *linkButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setButtonText:(id)a0 clickAction:(id /* block */)a1;
- (void)didClickButtonAction;
- (void)didClickLinkButtonAction;
- (id)initWithImage:(id)a0 withTitle:(id)a1 withDetail:(id)a2;
- (void)setLinkText:(id)a0 clickAction:(id /* block */)a1;
- (void)showHint;
- (void).cxx_destruct;
- (void)setup;
- (void)showButton;
- (void)resetUI;

@end
