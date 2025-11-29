@class NSString, UIImageView, UILabel, UIView, UIButton;

@interface AWEECOMIMNavigationBar : UIView <AWEECOMIMDarkThemeProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *bottomLine;
@property (nonatomic) BOOL showBottomLine;
@property (retain, nonatomic) UIImageView *bkgImageView;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIButton *rightSecondButton;
@property (retain, nonatomic) UIButton *rightThirdButton;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *titleView;
@property (copy, nonatomic) id /* block */ leftAction;
@property (copy, nonatomic) id /* block */ rightAction;
@property (copy, nonatomic) id /* block */ rightSecondAction;
@property (copy, nonatomic) id /* block */ rightThirdAction;
@property (nonatomic) BOOL supportDarkTheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)leftButtonClicked;
- (void)rightButtonClicked;
- (void)rightSecondButtonClicked;
- (void)refreshWhenDarkThemeChanged;
- (void)setBkgImageHidden:(BOOL)a0;
- (void)rightThirdButtonClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
