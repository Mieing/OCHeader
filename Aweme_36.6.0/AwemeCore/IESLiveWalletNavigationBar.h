@class UIFont, NSString, UIView, UIImage, UIButton, IESLiveButton, UILabel, UIColor;

@interface IESLiveWalletNavigationBar : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) IESLiveButton *leftButton;
@property (retain, nonatomic) IESLiveButton *rightButton;
@property (retain, nonatomic) UIView *sepLine;
@property (copy, nonatomic) id /* block */ leftButtonAction;
@property (copy, nonatomic) id /* block */ rightButtonAction;
@property (nonatomic) double bottomLineHeight;
@property (retain, nonatomic) UIColor *bottomLineColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UIButton *leftNaviButton;
@property (retain, nonatomic) UIImage *leftButtonImage;
@property (retain, nonatomic) UIImage *leftButtonBackgroundImage;
@property (copy, nonatomic) NSString *leftButtonTitle;
@property (retain, nonatomic) UIFont *leftButtonFont;
@property (retain, nonatomic) UIColor *leftButtonTitleColor;
@property (readonly, nonatomic) UIButton *rightNaviButton;
@property (retain, nonatomic) UIImage *rightButtonImage;
@property (retain, nonatomic) UIImage *rightButtonBackgroundImage;
@property (copy, nonatomic) NSString *rightButtonTitle;
@property (retain, nonatomic) UIFont *rightButtonFont;
@property (retain, nonatomic) UIColor *rightButtonTitleColor;
@property (nonatomic) struct CGSize { double width; double height; } barButtonSize;
@property (nonatomic) double rightButtonWidth;
@property (nonatomic) double leftButtonWidth;

+ (id)defaultNavigationBarWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)buttonWithTarget:(id)a0 action:(SEL)a1;

- (void)setRightButtonActionBlock:(id /* block */)a0;
- (void)setLeftButtonActionBlock:(id /* block */)a0;
- (void)handleLeftButton:(id)a0;
- (void)handleRightButton:(id)a0;
- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
