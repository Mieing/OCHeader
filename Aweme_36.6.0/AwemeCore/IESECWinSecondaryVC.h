@class IESECWinContainerErrorView, UILabel, IESECWinDataController, IESECWinFloatVC, UIViewController, IESECWinSecondaryAuthorInfoView, UIView, UIButton, IESECServiceProxy, IESECWinContext, FBKVOController, NSString, IESECUIButton, UIImageView;
@protocol IESECWinDataService, IESECWinMainScrollService, IESECWinTabService, IESECWinOpportunityService, IESECWinLynxCardService, IESECWinTabViewControllerManager, IESECWinTabViewControllerProtocol, IESECWinDataStatusService;

@interface IESECWinSecondaryVC : UIViewController <IESECWinSecondaryAuthorInfoViewDelegate> {
    BOOL _setupOnce;
}

@property (retain, nonatomic) UIView *navBar;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) IESECWinFloatVC *floatVC;
@property (retain, nonatomic) FBKVOController *kvoCtrl;
@property (retain, nonatomic) IESECWinContext *context;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (retain, nonatomic) IESECWinContainerErrorView *errorView;
@property (retain, nonatomic) IESECWinSecondaryAuthorInfoView *authorInfoView;
@property (retain, nonatomic) UILabel *categoryName;
@property (retain, nonatomic) IESECUIButton *searchButton;
@property (retain, nonatomic) UIViewController<IESECWinTabViewControllerProtocol> *tabVC;
@property (retain, nonatomic) IESECWinDataController *dataController;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLynxCardService> *lynxCardService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinMainScrollService> *scrollService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataStatusService> *statusService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinOpportunityService> *opportunityService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabViewControllerManager> *tabVCManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)searchAction;
- (void)showTrack;
- (void)configBtmTrackerV2;
- (void)configBTMTracker;
- (void)configBcmPageParams;
- (void)clickGoWindowBtn;
- (BOOL)isFromWindowInner;
- (int)icon_page;
- (void)setBackButtonConstraints;
- (unsigned long long)secondaryPageType;
- (void)jumpToWindowOrigin;
- (void)clickTrack:(long long)a0;
- (id)getBackButtonImageResource;
- (void)backAction;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)addObserver;
- (id)initWithParams:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;
- (void)setupError;

@end
