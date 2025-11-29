@class NSMutableDictionary, AWENewFaceStickerModel, NSMutableSet, NSDate, NSString, UIView;
@protocol AWESpecialCardContextProtocol, AWESpecialCardDelegate, HunterContainerProtocol;

@interface AWEFeedCreationCardController : AWEBaseController <AWEFeedControllerProtocol, AWESpecialCardControllerProtocol, AWEFeedCreationCardControllerProtocol>

@property (nonatomic) BOOL enabled;
@property (nonatomic) long long currentFetchCount;
@property (nonatomic) long long insertFeedCount;
@property (nonatomic) BOOL showFlag;
@property (retain, nonatomic) NSDate *frequencyCheckDate;
@property (nonatomic) BOOL hasInteracted;
@property (nonatomic) double timeDisplayStarted;
@property (retain, nonatomic) NSMutableSet *displayedAwemeIDs;
@property (nonatomic) long long cardType;
@property (retain, nonatomic) AWENewFaceStickerModel *propInfo;
@property (retain, nonatomic) NSMutableDictionary *interceptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESpecialCardDelegate> cardDelegate;
@property (weak, nonatomic) id<AWESpecialCardContextProtocol> cardContext;
@property (nonatomic) long long insertAfterCount;
@property (weak, nonatomic) UIView<HunterContainerProtocol> *hunterContainer;

- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)willInitialFetch;
- (void)showDebugToast:(id)a0;
- (void)cardDidAppear:(id)a0 withAweme:(id)a1;
- (void)cardDidDisappear:(id)a0 withAweme:(id)a1;
- (id)cardClientData:(id)a0;
- (void)bridgeRegisterWithContainer:(id)a0 aweme:(id)a1;
- (void)cardTemplateButtonClickWithParams:(id)a0;
- (BOOL)deleteCardWithModel:(id)a0 animated:(BOOL)a1;
- (BOOL)isBasicConditionsInvalid;
- (void)resetFrequencyControlFlagIfNeeded;
- (BOOL)isBizConditionsInvalid;
- (void)insertCardIfNeededWithCurrentList:(id)a0;
- (id)interceptorFor:(id)a0;
- (void)preloadPropIfNeeded;
- (void)markAlreadyShow;
- (void)handleNegativeFeedbackIfNeededWithAwemeModel:(id)a0;
- (void)markDislike;
- (BOOL)ignoreFrequencyControl;
- (void)markCardTypeAlreadyShow:(long long)a0 feedType:(long long)a1;
- (BOOL)isInFrequencyControl;
- (id)fetchTargetCardType;
- (void)doInsertCardIfNeeded:(id)a0;
- (BOOL)needDelayInsertWithCurrentList:(id)a0;
- (BOOL)ignoreInsertDelay;
- (void)insertCard;
- (id)feedCardParams;
- (void)handleFetchEmptyWithCardType:(long long)a0 feedType:(long long)a1;
- (void)handleAwemeModel:(id)a0;
- (BOOL)isCreationCardEnabled;
- (BOOL)isTargetAwemeType;
- (void)setupInterceptors;
- (BOOL)isCreationCardAlreadyShow;
- (void)fetchCameraCalendarCardWithCompletion:(id /* block */)a0;
- (void)insertCreationCardWithModel:(id)a0 atIndex:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupConfig;

@end
