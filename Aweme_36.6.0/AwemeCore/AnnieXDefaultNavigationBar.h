@class NSArray, NSString, UIView, UIViewController;
@protocol AnnieXUIServiceProtocol, BDXContainerProtocol;

@interface AnnieXDefaultNavigationBar : UIView <BDXNavigationBarProtocol>

@property (copy, nonatomic) NSArray *leftItems;
@property (copy, nonatomic) NSArray *rightItems;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL useDefaultTitle;
@property (retain, nonatomic) id<AnnieXUIServiceProtocol> uiService;
@property (retain, nonatomic) UIView *navBarContainerView;
@property (retain, nonatomic) UIView *statusBar;
@property (weak, nonatomic) UIViewController<BDXContainerProtocol> *container;
@property (copy, nonatomic) id /* block */ onLeftButtonClick;
@property (copy, nonatomic) id /* block */ onRightButtonClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)navigationBarHeightWithContext:(id)a0;
+ (id)navigationBar;
+ (double)topMargin;

- (void)attachToContainerWithParams:(id)a0 context:(id)a1 containerVC:(id)a2;
- (void)updateLeftItemsWithContext:(id)a0 containerVC:(id)a1;
- (void)updateRightItemsWithContext:(id)a0 containerVC:(id)a1;
- (void)updateContentBytitle:(id)a0 titleColor:(id)a1 context:(id)a2 containerVC:(id)a3;
- (void)updateTitleColor:(id)a0;
- (id)p_updateNavigationItems:(id)a0 selector:(SEL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateBackgroundColor:(id)a0;
- (void)updateTitle:(id)a0;

@end
