@class NSString, NSMutableDictionary, NSMapTable, UIView, NSDictionary;
@protocol BDXViewContainerProtocol;

@interface AWEPOIPublishMultiCardViewController : UIViewController <BDXContainerLifecycleProtocol, AWELifeMultiCardServiceProtocol>

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *naviBdxView;
@property (retain, nonatomic) NSMutableDictionary *viewDict;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *floatBoxView;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pageFrame;
@property (nonatomic) double floatBoxRightGap;
@property (nonatomic) double floatBoxBottomGap;
@property (copy, nonatomic) NSString *naviBarSchema;
@property (copy, nonatomic) NSString *poiListContentLynxSchema;
@property (copy, nonatomic) NSString *companyCouponH5Schema;
@property (copy, nonatomic) NSString *floatBoxSchema;
@property (retain, nonatomic) NSMapTable *subscriberDict;
@property (retain, nonatomic) NSMutableDictionary *pageGlobalProps;
@property (copy, nonatomic) NSDictionary *listQuery;
@property (retain, nonatomic) NSMutableDictionary *lynxPageModels;
@property (nonatomic) BOOL shouldShowCompanyCoupon;
@property (nonatomic) long long currentPageIndex;
@property (copy, nonatomic) NSDictionary *topBarData;
@property (nonatomic) BOOL fromJSB;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preloadTemplate;

- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithGlobalProps:(id)a0;
- (void)unregisterBDXSubscriber;
- (void)subscribeBDXWithEventName:(id)a0 callback:(id /* block */)a1;
- (void)p_parsePagesJsonArray;
- (void)p_updatePageListWithCompanyCouponSchema:(id)a0 shouldShowCompanyCoupon:(BOOL)a1;
- (void)p_updateGlobalProps;
- (void)subscriberBDXEvent;
- (void)p_exchangePageWithIndex:(long long)a0;
- (void)p_showFloatBoxWithSchema:(id)a0 rightGap:(double)a1 bottomGap:(double)a2 extra:(id)a3;
- (void)p_closeFloatBox;
- (void)configLynxView:(id)a0 schema:(id)a1 careSizeChange:(BOOL)a2 extra:(id)a3 initialData:(id)a4;
- (void)p_bringFloatBoxToTop;
- (id)createPageLynxViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pageModel:(id)a1;
- (void)createNavBarLynxViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 schema:(id)a1;
- (id)updateSchema:(id)a0 paramDict:(id)a1;
- (void)createFloatBoxLynxViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 schema:(id)a1 extra:(id)a2;
- (void)p_dealNavigationBarHeight:(double)a0;
- (void)p_dealFloatBoxSize:(struct CGSize { double x0; double x1; })a0;
- (id /* block */)initializeUpdatePageListCallback;
- (void)updateTopBarData:(id)a0;
- (void)updateListQueryData:(id)a0;
- (id)createWebViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 url:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (double)safeAreaTop;

@end
