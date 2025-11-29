@class NSString, IESECMallShopMomentContext, IESECMallShopMomentUIService, IESECMallShopMomentViewModel, IESECMallShopMomentScrollService, IESECMallShopMomentJSBService, IESECMallShopMomentBindingService, UIViewController, NSDictionary, IESECMallShopMomentTrackService, IESECListKitBFFViewController;

@interface IESECMallShopMomentTabKitProvider : NSObject <IESECTabKitHybridProviderProtocol>

@property (copy, nonatomic) NSString *passThroughAPI;
@property (retain, nonatomic) IESECMallShopMomentContext *context;
@property (retain, nonatomic) IESECMallShopMomentViewModel *viewModel;
@property (retain, nonatomic) IESECMallShopMomentUIService *uiService;
@property (retain, nonatomic) IESECMallShopMomentJSBService *jsbService;
@property (retain, nonatomic) IESECMallShopMomentTrackService *trackService;
@property (retain, nonatomic) IESECMallShopMomentScrollService *scrollService;
@property (retain, nonatomic) IESECMallShopMomentBindingService *bindingService;
@property (weak, nonatomic) UIViewController *hostViewController;
@property (weak, nonatomic) IESECListKitBFFViewController *listVC;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) unsigned long long pageModal;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMore;
- (id)preloadConfig;
- (void)initFetch;
- (id)bridges;
- (id)scrollImpl;
- (id)uiImpl;
- (BOOL)skipInitFetch;
- (void)setupProvider;
- (void)loadFirstScreenData;
- (void)loadFirstScreenAndInitFetch;
- (void)configRefreshHeader;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;

@end
