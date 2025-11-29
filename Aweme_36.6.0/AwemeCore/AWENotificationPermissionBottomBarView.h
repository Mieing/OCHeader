@class NSString, UIImageView, UILabel, UIButton;

@interface AWENotificationPermissionBottomBarView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *openButton;
@property (copy, nonatomic) NSString *tipsText;
@property (copy, nonatomic) id /* block */ closeButtonPressedBlock;
@property (copy, nonatomic) id /* block */ openButtonPressedBlock;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *iconUrl;

- (void)openButtonPressed;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)accessibilityElements;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)closeButtonPressed:(id)a0;

@end
