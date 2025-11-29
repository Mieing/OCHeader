@class UIColor, UIImageView, UILabel, UIView, UIButton;
@protocol WCFinderTipsViewControllerDelegate;

@interface WCFinderTipsViewController : MMWindowViewController

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (nonatomic) BOOL lockOrientation;
@property (weak, nonatomic) id<WCFinderTipsViewControllerDelegate> delegate;
@property (retain, nonatomic) UIColor *confirmButtonBkgColor;
@property (retain, nonatomic) UIColor *confirmButtonTextColor;
@property (retain, nonatomic) UIColor *cancelButtonTextColor;
@property (nonatomic) BOOL supportLandscape;

- (void)viewDidLoad;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)showTipsWithTipsDetail:(id)a0 confirmButtonTitle:(id)a1;
- (void)showTipsWithTipsTitle:(id)a0 tipsDetail:(id)a1 cancelButtonTitle:(id)a2 confirmButtonTitle:(id)a3;
- (void)setButtonTextFont:(id)a0;
- (void)cancel;
- (void)confirm;
- (void)hide;
- (void)realHideWithoutReport;
- (id)roundCornersOnView:(id)a0 onTopLeft:(BOOL)a1 topRight:(BOOL)a2 bottomLeft:(BOOL)a3 bottomRight:(BOOL)a4 radius:(float)a5;
- (void).cxx_destruct;

@end
