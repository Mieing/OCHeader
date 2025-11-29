@class NSString, NSMutableSet;
@protocol AWESpecialCardContextProtocol, AWESpecialCardDelegate;

@interface AWEFeedCreationCardMigrationBaseController : AWEBaseController <AWEFeedControllerProtocol, AWESpecialCardControllerProtocol>

@property (retain, nonatomic) NSMutableSet *displayedAwemeIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESpecialCardDelegate> cardDelegate;
@property (weak, nonatomic) id<AWESpecialCardContextProtocol> cardContext;

+ (BOOL)enableWithFeedType:(long long)a0;
+ (id)businessID;

- (void)showDebugToast:(id)a0;
- (void)cardDidAppear:(id)a0 withAweme:(id)a1;
- (BOOL)shouldCancelInsertCard:(id)a0 withAweme:(id)a1 isFromFeed:(BOOL)a2 willInsertForRowAtIndexPath:(id)a3;
- (void)cardDidInsert:(id)a0 withAweme:(id)a1 isFromFeed:(BOOL)a2 forRowAtIndexPath:(id)a3;
- (void)cardFrequencyControl:(id)a0 withAweme:(id)a1 isFromFeed:(BOOL)a2 type:(long long)a3;
- (id)cardClientData:(id)a0;
- (BOOL)ignoreFrequencyControl;
- (void)preloadResourcesIfNeededWithAweme:(id)a0;
- (BOOL)basicConditionsInvalid;
- (BOOL)p_isInFrequencyControl;
- (id)p_frequencyDictionary;
- (void)p_resetRemainCountIfNeededWithLastShowDate:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
