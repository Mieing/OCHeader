@class HTSLivePopupNavigationBar, NSString, UIView;

@interface HTSLivePopupBaseViewController : UIViewController <HTSLivePopupViewControllerProtocol>

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *safeAreaAdaptView;
@property (nonatomic) BOOL disableDismissOnClick;
@property (readonly, nonatomic) HTSLivePopupNavigationBar *navBar;
@property (nonatomic) BOOL hideLetfItem;
@property (nonatomic) BOOL dissmissOnly;
@property (nonatomic) BOOL banDismissWhenClickedBackGround;
@property (copy, nonatomic) id /* block */ onTapBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onSetupNavBar:(id)a0;
- (void)addNavbarSeparatorLineView;
- (void)didClickBackgroundView;
- (void)dismiss;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (double)contentViewHeight;

@end
