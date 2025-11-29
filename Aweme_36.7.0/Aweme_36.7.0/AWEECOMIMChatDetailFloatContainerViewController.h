@class UIViewController, NSMapTable, UIImageView, NSString, UIPanGestureRecognizer, AWEECOMIMChatDetailViewController;
@protocol AWEECOMIMChatDetailFloatVCProtocol;

@interface AWEECOMIMChatDetailFloatContainerViewController : UIViewController <UIGestureRecognizerDelegate, AWERouterViewControllerProtocol>

@property (retain, nonatomic) AWEECOMIMChatDetailViewController<AWEECOMIMChatDetailFloatVCProtocol> *detailFloatVC;
@property (nonatomic) double viewHeightFloat;
@property (retain, nonatomic) UIImageView *fromViewSnapshotImageView;
@property (nonatomic) BOOL isExpand;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (retain, nonatomic) UIPanGestureRecognizer *pan;
@property (retain, nonatomic) NSMapTable *originPopGestureEnabledTable;
@property (nonatomic) BOOL hasRecordPopGesture;
@property (nonatomic) BOOL notFirstTimeAppear;
@property (weak, nonatomic) UIViewController *fromVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEECModuleServiceDOUYINLGAdapterClass;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)closeFloatMessagePage;
- (id)initWithParams:(id)a0 snapshotImageView:(id)a1 chatDatailType:(long long)a2;
- (void)transferToFullVC;
- (void)popViewControllerWithAnimated:(BOOL)a0;
- (void)showChatDetailFloatVC;
- (id)aAWEECModuleServiceDOUYINLGAdapter;
- (void)addPanGR;
- (void)setPopGestureEnable:(BOOL)a0;
- (void)hostInjectionViewWillDisappear;
- (void)hostInjectionDidOpenPage;
- (void)panGestureRecognizerAction;
- (void)layoutUIIfNeeded;
- (long long)getPageContentMode:(BOOL)a0;
- (id)getHostInjectionExtraParams;
- (void)hostInjectionWillClosePage;
- (void)hostInjectionWillOpenNextPage;
- (void)updateBackgroundSnapshotImageView;
- (void).cxx_destruct;
- (void)panGestureRecognizerAction:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
