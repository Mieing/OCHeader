@class NSMutableDictionary, NSDictionary, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEDCardManager : NSObject <AWEDCardManagerProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (retain, nonatomic) NSMutableDictionary *exposedCards;
@property (retain, nonatomic) NSMutableDictionary *unselectedCards;
@property (readonly, nonatomic) NSMutableArray *dcardsInHotFeed;
@property (readonly, copy, nonatomic) NSDictionary *exposedAwemeCards;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)removeAllDCardsInHotFeed;
- (void)addDCardsInHotFeedFromArray:(id)a0;
- (BOOL)acceptDCard:(id)a0;
- (void)addDCardInHotFeed:(id)a0;
- (void)insertDCard:(id)a0 isFromCardTool:(BOOL)a1 fallbackEnabled:(BOOL)a2 insertCompletion:(id /* block */)a3 interception:(id /* block */)a4;
- (int)dcardsAcceptionBitsForContainerType:(long long)a0;
- (void)cleanCardForScene:(id)a0;
- (id)createDCardWithAwemeModel:(id)a0 loadCompletion:(id /* block */)a1;
- (BOOL)resourcesExistInChannel:(id)a0;
- (void)registerBSyncGeckoActionMessageWithCallback:(id /* block */)a0;
- (id)removeNullFromDict:(id)a0;
- (void)preloadLynxWithAwemeModel:(id)a0 completion:(id /* block */)a1;
- (id)cardCachedForScene:(id)a0;
- (BOOL)dcardCompensateDisplayEventEnable;
- (int)delayCallDidDisplay;
- (void)unregisterScene:(id)a0;
- (BOOL)dcardUpdateEnable;
- (void)registerScene:(id)a0 withContext:(id)a1;
- (void)updateFreqRulesWithModel:(id)a0;
- (void)loadResourcesFromChannel:(id)a0 enableRetry:(BOOL)a1 completion:(id /* block */)a2;
- (id)statsForScene:(id)a0;
- (id)contextOfScene:(id)a0;
- (void)testFreqControlWithAwemeModel:(id)a0 testResult:(id *)a1;
- (void)updateStats:(id)a0 containerType:(long long)a1;
- (void)updateLocalStats:(id)a0 forScene:(id)a1;
- (void)trackInsertDCard:(id)a0;
- (void)trackDCardStatus:(id)a0 extra:(id)a1;
- (void)trackInsertWithDCard:(id)a0 result:(BOOL)a1 expectedIndex:(long long)a2 insertedIndex:(long long)a3 fallbackEnabled:(BOOL)a4 startTime:(double)a5 endTime:(double)a6 rejectReason:(id)a7;
- (void)trackDCardError:(id)a0 errorMsg:(id)a1;
- (id)getCardType:(long long)a0 status:(unsigned long long)a1 extra:(id)a2;
- (BOOL)inflowPageRollBack;
- (void)recordMultiPOICardShowWithModel:(id)a0;
- (void)cleanExposedCards;
- (void)exposeDCard:(id)a0;
- (id)exposedForKey:(id)a0;
- (void)unselectedDCard:(id)a0;
- (id)unselectedDCardForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
