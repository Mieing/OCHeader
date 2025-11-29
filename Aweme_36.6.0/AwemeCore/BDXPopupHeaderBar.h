@class UIFont, NSString, UIImage, UIView, UIButton, UIViewController, UILabel, UIColor;
@protocol BDXContainerProtocol;

@interface BDXPopupHeaderBar : UIView <BDXNavigationBarProtocol>

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *sepLine;
@property (nonatomic) double bottomLineHeight;
@property (retain, nonatomic) UIColor *bottomLineColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UIButton *closeHBarButton;
@property (retain, nonatomic) UIImage *closeButtonImage;
@property (retain, nonatomic) UIImage *closeButtonBackgroundImage;
@property (retain, nonatomic) NSString *closeButtonTitle;
@property (retain, nonatomic) UIFont *closeButtonFont;
@property (retain, nonatomic) UIColor *closeButtonTitleColor;
@property (weak, nonatomic) UIViewController<BDXContainerProtocol> *container;
@property (copy, nonatomic) id /* block */ onLeftButtonClick;
@property (copy, nonatomic) id /* block */ onRightButtonClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonWithTarget:(id)a0 action:(SEL)a1;

- (void)attachToContainerWithParams:(id)a0 context:(id)a1;
- (void)__layOutSubViews;
- (void)handleCloseButton:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
