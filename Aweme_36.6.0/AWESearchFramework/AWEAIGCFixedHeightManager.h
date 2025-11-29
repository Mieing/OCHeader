@class AWESearchAIGCService, NSMutableDictionary, NSString, AWESearchAIGCFixedCardModel, NSMutableArray;
@protocol CachalotRenderPipelineComponentViewModel, AWEAIGCFixedHeightManagerDelegate;

@interface AWEAIGCFixedHeightManager : NSObject <AWEAIGCFixedHeightManagerModuleService>

@property (weak, nonatomic) AWESearchAIGCService *aigcService;
@property (nonatomic) double maxFixedHeight;
@property (nonatomic) double maxContentHeight;
@property (nonatomic) double curListenAICardHeight;
@property (nonatomic) BOOL hasFinishDataReceive;
@property (retain, nonatomic) NSMutableArray *curModelArray;
@property (retain, nonatomic) NSMutableArray *lastModelArray;
@property (retain, nonatomic) NSMutableArray *deleteModelArray;
@property (nonatomic) BOOL isUpdateHeight;
@property (retain, nonatomic) NSMutableArray *listenAICardModelList;
@property (retain, nonatomic) NSMutableDictionary *fixedCardDict;
@property (nonatomic) BOOL hasShrink;
@property (copy, nonatomic) NSString *truckEndCardID;
@property (nonatomic) BOOL lastHasShrink;
@property (nonatomic) double lastListenAICardHeight;
@property (nonatomic) BOOL isReachFixedHeight;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> listenAICardModel;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> fixedCard;
@property (retain, nonatomic) AWESearchAIGCFixedCardModel *fixedModel;
@property (weak, nonatomic) id<AWEAIGCFixedHeightManagerDelegate> delegate;
@property (nonatomic) unsigned long long answerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)updateCardHeight:(id)a0;
- (void)observerAICardShowHeight:(id)a0;
- (void)stopObserver;
- (double)checkSSCardHeight:(double)a0 cardID:(id)a1 cellController:(id)a2 viewModel:(id)a3;
- (double)checkSSCardHeight:(double)a0 cardID:(id)a1 cellController:(id)a2 viewModel:(id)a3 shouldNotCheckModel:(BOOL)a4;
- (BOOL)isEnableFixedHeight;
- (double)calculateExtraReduceHeight:(id)a0 reduceHeight:(double)a1;
- (void)checkShouldHideFixedCard;
- (double)calculateCutHeight:(id)a0 newHeight:(double)a1;
- (void)updateCardHeight:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (double)checkSSCardHeight:(double)a0 cardID:(id)a1 viewModel:(id)a2;
- (void)startObserverAICardShowHeight:(id)a0 aigcService:(id)a1;
- (void)updateSearchId:(id)a0;
- (void)clearStatusWithListenAICardHeight:(double)a0;
- (void)finishReceiveData;
- (void)updateFixedCardHeight:(double)a0 deleteHeight:(double)a1;
- (void)updateFixedCardHeightWithCommit:(double)a0;
- (id)createAIGCFixedCardNode:(id)a0 defaultHeight:(double)a1;
- (void)changeFixedCardStatusWithAnswerType:(unsigned long long)a0;
- (void)removeFixedCard;
- (BOOL)hasReachMaxFixedHeight;
- (void)checkShouldShrinkFixedCard:(id)a0;
- (void)removeAllSingleCard;
- (BOOL)calculateAndUpdateCardHeight:(long long)a0;
- (id)insertFixedCardWithDefaultHeight:(double)a0;
- (void).cxx_destruct;

@end
