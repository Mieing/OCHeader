@class UINavigationController, UITapGestureRecognizer, NSDictionary, NSString, UIView, MASConstraint, UIViewController;
@protocol AWERouterViewControllerProtocol;

@interface AWEIMFansGroupMasterStateHalfScreenViewController : UIViewController <UIGestureRecognizerDelegate, AWERouterViewControllerProtocol>

@property (retain, nonatomic) UIViewController<AWERouterViewControllerProtocol> *childVC;
@property (retain, nonatomic) UINavigationController *childNavi;
@property (retain, nonatomic) UIView *wrapperView;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) double wrapperViewHeightRatio;
@property (retain, nonatomic) MASConstraint *bottomToBottomCTT;
@property (retain, nonatomic) MASConstraint *bottomToBottomOffset20CTT;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (id)initWithRouterParams:(id)a0 childVC:(id)a1;
- (void)__setupUI;
- (void)__addNoti;
- (void)__dismissPanel;
- (void)__dismissPanelGesAction;
- (void)__showPanel;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewDidLoad;

@end
