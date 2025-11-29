@class NSString, IESECServiceProxy, FBKVOController, IESECUserTrackerPageContext, IESECWinContext;
@protocol IESECWinDataService, IESECFansClubService, IESECWinTabService, IESECWinAuthorService, IESECWinOpportunityService, IESECWinLiveService, IESECWinCategoryService, IESECWinLynxCardService, IESECWinFeedService;

@interface IESECWinCommonTrackService : NSObject <IESECWinOpportunityProtocol, IESECWinCommonTrackService> {
    BOOL _isFirstViewWillAppear;
    BOOL _isFirstViewDidAppear;
}

@property (weak, nonatomic) IESECWinContext *context;
@property (retain, nonatomic) FBKVOController *kvoCtrl;
@property (retain, nonatomic) IESECUserTrackerPageContext *eggPageContext;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinFeedService> *feedService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLiveService> *liveService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECFansClubService> *fansClubService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinAuthorService> *authorService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinOpportunityService> *opportunityService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinCategoryService> *categoryService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLynxCardService> *lynxCardService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL setupUIDone;

- (void)canShowPendant;
- (void)configBTMTracker;
- (void)subscribeFE;
- (void)trackEnterPV;
- (void)reportALog;
- (void)unSubscribeFE;
- (void)requestTabList:(id)a0;
- (void)exitWindow;
- (void).cxx_destruct;
- (void)startWork;
- (id)initWithContext:(id)a0;
- (void)addObserver;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
