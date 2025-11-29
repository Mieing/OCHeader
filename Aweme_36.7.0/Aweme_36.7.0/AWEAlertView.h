@class UITextView, NSArray, AWEButton, UIImageView, UIView, UILabel;

@interface AWEAlertView : UIView

@property (retain, nonatomic) AWEButton *buttonDeny;
@property (retain, nonatomic) AWEButton *buttonAllow;
@property (retain, nonatomic) UIView *animationView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextView *descriptionTextView;
@property (copy, nonatomic) NSArray *buttons;
@property (copy, nonatomic) NSArray *buttonTitles;

+ (void)showAlertWithTitle:(id)a0 description:(id)a1 image:(id)a2 actionButtonTitle:(id)a3 cancelButtonTitle:(id)a4 actionBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6;
+ (void)showAlertWithTitle:(id)a0 description:(id)a1 image:(id)a2 buttonTitles:(id)a3 buttonBlocks:(id)a4;

- (id)initWithButtonsTitle:(id)a0 image:(id)a1 buttonBlocks:(id)a2;
- (void)__showSelfDefineAlertWithAnimation;
- (void)__showAlertWithAnimation;
- (void)loadSubviews;
- (void)loadSubviewsWithButtonTitles:(id)a0 image:(id)a1 buttonBlocks:(id)a2;
- (void)dismissSelfDefineAlert;
- (void)__dismissSelfDefineAlertWithAnimation;
- (void)__dismissAlertWithAnimation;
- (void).cxx_destruct;
- (id)init;
- (void)dismissAlert;

@end
