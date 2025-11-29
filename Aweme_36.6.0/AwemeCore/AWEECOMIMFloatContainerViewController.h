@class UIImageView, UIViewController, NSString;
@protocol AWEECOMIMFloatContainerDetailViewControllerProtocol;

@interface AWEECOMIMFloatContainerViewController : UIViewController <UIGestureRecognizerDelegate, AWERouterViewControllerProtocol>

@property (retain, nonatomic) UIViewController<AWEECOMIMFloatContainerDetailViewControllerProtocol> *detailFloatVC;
@property (nonatomic) double viewHeightFloat;
@property (nonatomic) BOOL enableTapBackgroundToClose;
@property (retain, nonatomic) UIImageView *fromViewSnapshotImageView;
@property (copy, nonatomic) id /* block */ willCloseFloatContainerBlock;
@property (copy, nonatomic) id /* block */ didCloseFloatContainerBlock;
@property (nonatomic) unsigned long long showType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (id)initWithDetailFloatVC:(id)a0 config:(id)a1;
- (void)setPopGestureEnable:(BOOL)a0;
- (void)showAsChildWithParentVC:(id)a0;
- (void)closeDetailFloatVC;
- (void)showDetailFloatVC;
- (void)showByPushWithFromVC:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)handleTap;

@end
