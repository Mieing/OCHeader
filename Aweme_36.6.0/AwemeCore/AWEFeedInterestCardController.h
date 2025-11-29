@class NSString, AWEFeedInterestFIFODictionary, NSHashTable;
@protocol AWESpecialCardContextProtocol, AWESpecialCardDelegate;

@interface AWEFeedInterestCardController : AWEBaseController <AWESpecialCardControllerProtocol, AWEUserMessage, AWEFeedInterestCardControllerProtocol>

@property (retain, nonatomic) NSHashTable *weakContainerTable;
@property (nonatomic) BOOL hasAutoSwiped;
@property (nonatomic) BOOL isSpecialEntryDisplaying;
@property (retain, nonatomic) AWEFeedInterestFIFODictionary *dataTaskMap;
@property (nonatomic) double lastGuideAnimationTimestamp;
@property (weak, nonatomic) id<AWESpecialCardDelegate> cardDelegate;
@property (weak, nonatomic) id<AWESpecialCardContextProtocol> cardContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double durationSinceLastGuideAnimation;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)tableView:(id)a0 didDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)cardWillDisplay:(id)a0 withAweme:(id)a1;
- (void)cardDidEndDisplaying:(id)a0 withAweme:(id)a1;
- (void)cardDidInsert:(id)a0 withAweme:(id)a1 isFromFeed:(BOOL)a2 forRowAtIndexPath:(id)a3;
- (void)bridgeRegisterWithContainer:(id)a0 aweme:(id)a1;
- (void)dynamicContainer:(id)a0 containerViewDidFinishLoadWithURL:(id)a1 aweme:(id)a2;
- (id)trackParamsWithBusinessInfo:(id)a0 eventType:(long long)a1;
- (void)didReceiveFavoriteNotification:(id)a0;
- (void)didReceiveDiggNotification:(id)a0;
- (void)willFinishEnterInterestPageNotification:(id)a0;
- (void)didFinishExitInterestPageNotification:(id)a0;
- (void)addInterestParams:(id)a0 model:(id)a1;
- (BOOL)p_showBottomEntryIfNeededWithAweme:(id)a0;
- (BOOL)p_hideBottomEntryIfNeeded;
- (void)p_sendContainerEvent:(id)a0 params:(id)a1;
- (void)p_sendFollowStatusChangeEvent:(id)a0 status:(long long)a1;
- (BOOL)p_isInterestAweme:(id)a0;
- (id)p_bottomTabPlugin;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
