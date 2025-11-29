@class IESECServiceProxy, IESECShopBrandFloatLiveView, NSString;
@protocol IESECShopTopTabService, IESECShopLayoutService, IESECShopStateService, IESECShopDataService, IESECShopLiveService, IESECShopForwardCoService;

@interface IESECShopFloatLiveController : IESECShopControllerV2 <IESECShopEventSubscriber, IESECShopFloatLiveController>

@property (retain, nonatomic) IESECShopBrandFloatLiveView *floatLiveView;
@property (nonatomic) struct CGPoint { double x; double y; } lastTouchPoint;
@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLiveService> *liveService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopStateService> *stateService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLayoutService> *layoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopTopTabService> *topTabService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopForwardCoService> *forwardCoService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)controllerShouldLoadWithPageContextV2:(id)a0;

- (BOOL)shouldShowFloatLive;
- (void)didSetPageContextV2:(id)a0;
- (void)controllerDidLoad;
- (void)iesecshop_pagerView:(id)a0 mainScrollViewDidScroll:(id)a1;
- (BOOL)isBrandShopV2;
- (void)animateFlowLive:(id)a0;
- (void)showFloatLiveIfNeeded;
- (void)startFloatLiveAnimation;
- (void)finishFloatLiveAnimation;
- (void)didShowFloatLiveView;
- (double)clampValue:(double)a0 min:(double)a1 max:(double)a2;
- (void)didTapFloatLiveView;
- (void).cxx_destruct;
- (void)setupViews;
- (void)handlePanGesture:(id)a0;

@end
