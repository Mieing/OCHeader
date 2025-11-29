@class IESECMallShopMomentContext, NSString, IESECMallShopMomentUIService, IESECMallShopMomentViewModel, IESECMallShopMomentBindingService, IESECMallShopMomentJSBService, IESECMallShopMomentScrollService, IESECMallShopMomentTrackService;

@interface IESECMallShopMomentViewController : UIViewController <IESECMallChannelViewControllerProtocol, IESECMallShopMomentViewControllerProtocol>

@property (retain, nonatomic) IESECMallShopMomentContext *context;
@property (copy, nonatomic) id /* block */ refreshCompletion;
@property (retain, nonatomic) IESECMallShopMomentViewModel *viewModel;
@property (retain, nonatomic) IESECMallShopMomentUIService *uiService;
@property (retain, nonatomic) IESECMallShopMomentJSBService *jsbService;
@property (retain, nonatomic) IESECMallShopMomentTrackService *trackService;
@property (retain, nonatomic) IESECMallShopMomentScrollService *scrollService;
@property (retain, nonatomic) IESECMallShopMomentBindingService *bindingService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL realDidAppear;

- (BOOL)currentTabIsTop;
- (id)currentContentScrollView;
- (void)endRefresh;
- (BOOL)needParentRefreshAbility;
- (BOOL)canResponsPullRefresh;
- (void)setContentViewScrollEnabled:(BOOL)a0;
- (void)animatedRefreshType:(long long)a0 completion:(id /* block */)a1;
- (void)didEnter;
- (void)didLeave;
- (void)setupProvider;
- (void)initFetchShowLoading:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupContext;

@end
