@class NSString, UITableViewCell, BDXBridgeEventSubscriber, AWEAwemeModel, AWEBinding;

@interface AWEFeedDOUYINLiteController : AWEBaseController <AWEFeedControllerProtocol>

@property (retain, nonatomic) AWEAwemeModel *taskGuideModel;
@property (retain, nonatomic) BDXBridgeEventSubscriber *openSubscriber;
@property (retain, nonatomic) AWEAwemeModel *experiGuideModel;
@property (retain, nonatomic) BDXBridgeEventSubscriber *deleteGuideSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *feedCardSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *removeFeedCardSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *feedCardEnterTaskSceneSubscriber;
@property (retain, nonatomic) AWEAwemeModel *uninsertedFeedTaskModel;
@property (weak, nonatomic) UITableViewCell *willDisPlayCell;
@property (weak, nonatomic) AWEAwemeModel *willDisplayModel;
@property (weak, nonatomic) AWEBinding *lynxLoadBinding;
@property (nonatomic) BOOL isViewAppear;
@property (nonatomic) BOOL isColdStartPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINLiteAdaperClass;
+ (Class)aAWEFeedTaskGuideDOUYINLiteAdapterClass;
+ (Class)aAWEBalanceExchangeManagerDOUYINLiteAdapterClass;
+ (Class)aAWELiteStudioModuleAdapterClass;
+ (Class)aAWEMainModuleDOUYINLiteAdapterClass;
+ (Class)aAWEIncentiveModuleDOUYINLiteAdapterClass;

- (void)willRefresh;
- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)refreshCompletion:(id)a0 error:(id)a1 needAnimation:(BOOL)a2;
- (void)tableView:(id)a0 didDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)configureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (id)aAWEFeedModuleServiceDOUYINLiteAdaper;
- (BOOL)isPendant2SwitchOn;
- (void)addJsEvent;
- (void)showFeedEcommercePopupIfNeeded;
- (id)aAWEIncentiveModuleDOUYINLiteAdapter;
- (id)aAWEMainModuleDOUYINLiteAdapter;
- (void)insertTaskGuideModel:(id)a0 taskType:(long long)a1;
- (void)removeOutdatedFeedTaskCardIfNeeded;
- (BOOL)validLegalGuideCell:(id)a0;
- (id)aAWELiteStudioModuleAdapter;
- (BOOL)isNewFeedTaskCardCell:(id)a0;
- (id)aAWEBalanceExchangeManagerDOUYINLiteAdapter;
- (id)aAWEFeedTaskGuideDOUYINLiteAdapter;
- (void)taskGuideDeleteIfNeeded:(id)a0 taskType:(long long)a1;
- (void)taskGuideSkipIfNeeded:(id)a0;
- (BOOL)isFeedGuideTaskCardCell:(id)a0;
- (void)didBecomeActive;
- (void)willResignActive;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)init;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
