@class NSString, UIImageView, IESECServiceProxy, UILabel, NSHashTable;
@protocol IESECShopLayoutService, IESECShopStateService, IESECShopDataService, IESECShopForwardCoService, IESECShopEventService;

@interface IESECShopSevenSplitController : IESECShopControllerV2 <IESECShopSevenSplitController> {
    NSHashTable *_videoControls;
    long long _splitStatusBarStyle;
}

@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) UIImageView *guideIconView;
@property (retain, nonatomic) UIImageView *guideImageView;
@property (nonatomic) unsigned long long lastScreenState;
@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopStateService> *stateService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopEventService> *eventService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLayoutService> *layoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopForwardCoService> *forwardCoService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)controllerShouldLoadWithPageContextV2:(id)a0;

- (void)setupBinding;
- (void)registerJSB;
- (BOOL)tabKitController:(id)a0 splitSlideContainer:(id)a1 panGestureShouldBegin:(id)a2;
- (void)tabKitController:(id)a0 splitSlideContainerDidScroll:(id)a1;
- (double)tabKitController:(id)a0 splitSlideContainerFinalOffset:(id)a1;
- (BOOL)tabKitController:(id)a0 splitSlideContainerShouldPauseVideo:(id)a1;
- (BOOL)tabKitController:(id)a0 splitSlideContainer:(id)a1 tapGestureHitDismiss:(id)a2;
- (void)controllerDidLoad;
- (void)controllerWillDisappear:(BOOL)a0;
- (void)registerVideoControl:(id)a0;
- (BOOL)videoShouldPause;
- (void)recordStatusBarStyle;
- (void)postEventToWeb;
- (void)configScrollEnabled;
- (void)updateScreenStateTo:(unsigned long long)a0;
- (void)reportTracker;
- (void)handleCloseProgress:(id)a0;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (id)init;
- (void)dealloc;
- (void)setupViews;

@end
