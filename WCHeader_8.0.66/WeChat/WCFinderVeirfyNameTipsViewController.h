@class NSString, UILabel, UIView, UIButton;
@protocol WCFinderVeirfyNameTipsViewControllerDelegate;

@interface WCFinderVeirfyNameTipsViewController : MMWindowViewController

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) NSString *tips;
@property (retain, nonatomic) NSString *tinyAppName;
@property (retain, nonatomic) NSString *tinyAppPath;
@property (weak, nonatomic) id<WCFinderVeirfyNameTipsViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (void)showTips;
- (void)hide;
- (void)onClickConfirm;
- (void)startVerify;
- (id)roundCornersOnView:(id)a0 onTopLeft:(BOOL)a1 topRight:(BOOL)a2 bottomLeft:(BOOL)a3 bottomRight:(BOOL)a4 radius:(float)a5;
- (void).cxx_destruct;

@end
