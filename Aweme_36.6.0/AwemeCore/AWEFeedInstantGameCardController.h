@class NSString, UIViewController;
@protocol AWESpecialCardContextProtocol, AWESpecialCardPanelProtocol, AWESpecialCardDelegate;

@interface AWEFeedInstantGameCardController : AWEAwemeFeedBaseController <AWEFeedControllerProtocol, AWESpecialCardControllerProtocol, AWEInstantGameCardControllerDelegate>

@property (nonatomic) BOOL startCount;
@property (nonatomic) long long deleteCount;
@property (weak, nonatomic) UIViewController<AWESpecialCardPanelProtocol> *panelViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESpecialCardDelegate> cardDelegate;
@property (weak, nonatomic) id<AWESpecialCardContextProtocol> cardContext;

- (void)willRefresh;
- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (id)ironManModuleService;
- (void)cardWillDisplay:(id)a0 withAweme:(id)a1;
- (void)cardDidInsert:(id)a0 withAweme:(id)a1 isFromFeed:(BOOL)a2 forRowAtIndexPath:(id)a3;
- (id)trackParamsWithBusinessInfo:(id)a0;
- (id)panelViewControllerForModel:(id)a0;
- (id)specialCardBussinessIdentifier;
- (void)dismissCardWithModel:(id)a0;
- (id)gameManager;
- (void)receiveInnerFeedInsertCardNoti:(id)a0;
- (BOOL)isCurrentHot;
- (void)p_dismissCardIfNeed;
- (BOOL)enableCardBindingAB;
- (BOOL)enableReloadOpti;
- (void)gameCardActionButtonClicked:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
