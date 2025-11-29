@class NSString;
@protocol AWEGoodsCardPromptManagerInterface, AWEBalanceExchangeCardPromptManagerProtocol;

@interface AWEPlayInteractionECommerceController : AWEPlayInteractionBaseController <AWEPlayInteractionPlayerLifeCycleProtocol, AWEAwemePlayInteractionECommerceInnerDelegate, AFDPureModePageGoodsDelegate>

@property (nonatomic) BOOL isShowedGoodsPromotionView;
@property (retain, nonatomic) id<AWEGoodsCardPromptManagerInterface> goodsPromptManager;
@property (retain, nonatomic) id<AWEBalanceExchangeCardPromptManagerProtocol> balanceExchangePromptManager;
@property (nonatomic) BOOL needUpdateBalanceExchangeData;
@property (nonatomic) BOOL isHide;
@property (copy, nonatomic) id /* block */ showGoodsCardHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEBalanceExchangeDOUYINLiteAdapterClass;
+ (Class)aAWEBalanceExchangeManagerDOUYINLiteAdapterClass;

- (void)setHide:(BOOL)a0;
- (void)onPlayerWillLoopPlaying:(id)a0;
- (void)resumeCardAnimation;
- (void)cancelCardAnimation;
- (void)showGoodsCardWithMediaPlayedSeconds:(double)a0;
- (void)onPlayerDidReadyForDisplay:(id)a0;
- (id)aAWEBalanceExchangeDOUYINLiteAdapter;
- (id)aAWEBalanceExchangeManagerDOUYINLiteAdapter;
- (BOOL)goodsPromptManagerIsCardShowing;
- (void)setPromptManagerModel:(id)a0;
- (BOOL)shouldShowAdCard;
- (void)triggerAnchorBenefitActionIfNeeded;
- (void)addVideoPlayBackTimeHandler;
- (void)addAlbumIndexHandler;
- (void)addVideoLoopPlayHandler;
- (void)showSingleCardIfNeeded;
- (BOOL)ecDidPrefetchGoodsModel;
- (BOOL)enableSingleCardShow;
- (id)cardService;
- (void)setEcDidPrefetchGoodsModel:(BOOL)a0;
- (void)showGoodsCard;
- (BOOL)isDouyinLiteAdapterExisting;
- (BOOL)enableSingleCardShowWithModel:(id)a0;
- (void)addContextHandlerForGoodCardIfNeeded;
- (void)tryShowLiteBalanceExchangePromptCard;
- (void)updateExistedBalanceExchangeDataIfNeeded;
- (BOOL)currentAnchorIsECCart;
- (id)exposedCommonCommerceDelegate;
- (void)tapPromptGoodsCardWithTargetPromotionID:(id)a0;
- (void)showBalanceExchangePromptCard;
- (void)viewDidAppear;
- (id)model;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;

@end
