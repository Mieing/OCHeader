@class NSString, UIImageView, UILabel, UIView, UIButton;

@interface AWEIMDiskFullPopupView : AWEIMBasePopupView

@property (copy, nonatomic) NSString *appName;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIView *systemContentView;
@property (retain, nonatomic) UILabel *systemTitleLabel;
@property (retain, nonatomic) UILabel *systemSubtitleLabel;
@property (retain, nonatomic) UIView *appContentView;
@property (retain, nonatomic) UILabel *appTitleLabel;
@property (retain, nonatomic) UIButton *appButton;
@property (copy, nonatomic) id /* block */ popupViewDidActionClean;
@property (copy, nonatomic) id /* block */ popupViewDidAutoClose;

- (void)themeChange;
- (void)handleWillEnterForegroundNotification:(id)a0;
- (void)trackWithActionType:(id)a0;
- (void)refreshViewByFreeSpace;
- (void)configAccessibility;
- (void)configBigFont;
- (void)appButtonClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)show;

@end
