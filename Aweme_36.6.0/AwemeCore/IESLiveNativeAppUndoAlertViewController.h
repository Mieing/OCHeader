@class UIButton, UIImageView, UIView, NSAttributedString, UILabel;

@interface IESLiveNativeAppUndoAlertViewController : UIViewController

@property (copy, nonatomic) NSAttributedString *titleText;
@property (copy, nonatomic) NSAttributedString *content;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *sureButton;
@property (retain, nonatomic) UIView *lineView;

- (void)makeSubviews;
- (void)makeLayouts;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithTitle:(id)a0 content:(id)a1;

@end
