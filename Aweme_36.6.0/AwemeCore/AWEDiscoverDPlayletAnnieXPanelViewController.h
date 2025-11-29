@class NSMutableDictionary, NSString, BDXBridgeEventSubscriber, UIView, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol AWEDiscoverDPlayletAnnieXPanelViewControllerDelegate, AnnieXContainerBaseProtocol, AnnieXCardModelProtocol;

@interface AWEDiscoverDPlayletAnnieXPanelViewController : UIViewController <BDXContainerLifecycleProtocol, UIGestureRecognizerDelegate>

@property (weak, nonatomic) id<AWEDiscoverDPlayletAnnieXPanelViewControllerDelegate> delegate;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *containerView;
@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (retain, nonatomic) BDXBridgeEventSubscriber *resetInitSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *switchEpisodeSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *collectSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *requestModelSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *dismissPanelSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *loginSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *jumpOrder;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (nonatomic) BOOL canUpdateData;
@property (nonatomic) BOOL shouldUpdateData;
@property (nonatomic) BOOL shouldNotifyPanelShow;
@property (nonatomic) double initTimeInterval;
@property (retain, nonatomic) NSMutableDictionary *bottomTipExposeParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getModelDicWithAwemeModel:(id)a0;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)selfTapped:(id)a0;
- (void)dataSourceHasUpdated;
- (void)dataSourceHasUpdatedWithFlag:(unsigned long long)a0;
- (void)collectWithParams:(id)a0;
- (void)updateAwemeModelPageDataWithList:(id)a0 isLoadMore:(BOOL)a1 hasMore:(BOOL)a2;
- (void)dismissLynxPanel;
- (void)refreshTableViewController;
- (id)getSeriesInfoDic;
- (id)getMarketingBarInfoDic;
- (id)getPlayletListDicFirstPage;
- (id)getCurrentAwemeIdDic;
- (void)updateTrackerParams;
- (id)getHasMoreDic;
- (id)getUserIdDic;
- (void)initContainerView;
- (void)notifyLynxPanelShow;
- (id)getFirstPageLynxTemplateData;
- (void)notifyLynxPanelHide;
- (void)bottomTipViewDidExposedWithParams:(id)a0;
- (void)updatePanelUIWithPlayletId:(id)a0;
- (void)preloadAnnieXContainerIfNeeded;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;
- (void)addObservers;

@end
