@class DolphinRerankService, NSTimer, NSMutableIndexSet, NSDictionary, NSArray, NSString;
@protocol AWEDolphinSyncDataDelegate;

@interface AWEFeedDolphinAdapter : NSObject <DolphinRerankDataSource, DolphinRerankDelegate, AWEFeedDolphinAdapter>

@property (retain, nonatomic) DolphinRerankService *service;
@property (retain, nonatomic) NSMutableIndexSet *showSet;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long sceneType;
@property (copy, nonatomic) NSDictionary *clientParams;
@property (copy, nonatomic) NSArray *dataKeyPathsForDataSource;
@property (copy, nonatomic) NSArray *dataKeyPathsForSupplementSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEDolphinSyncDataDelegate> syncDelegate;
@property (copy, nonatomic) NSString *satiParamsForPitayaCommerce;
@property (copy, nonatomic) NSString *liveInnerEnterSource;

+ (BOOL)pitayaEnable:(long long)a0;
+ (id)rerankServiceName:(long long)a0;
+ (id)makeAwemeDataDictMethod:(id)a0;
+ (id)jsonStringToDictionaryMethod:(id)a0;

- (long long)currentAwemeIndex;
- (id)liveModuleService;
- (id)initDolphinService:(long long)a0;
- (id)requestParamForCommercePitayaReRank;
- (void)recordAwemeShowStatus:(BOOL)a0 index:(long long)a1;
- (void)startRerank:(unsigned long long)a0;
- (void)trackAdGapInfoWithIndex:(long long)a0;
- (void)trackFindResultDeduplication:(id)a0;
- (void)trackWithEvent:(id)a0 status:(id)a1 message:(id)a2 extParams:(id)a3;
- (void)pauseDolphinTimer;
- (void)registerReRankBridgeWhenReady;
- (void)unregisterReRankBridge;
- (void)registerReRankBridge;
- (void)startRerank:(unsigned long long)a0 withClientParams:(id)a1;
- (id)processLiveInnerEnterSource;
- (void)dolphinCollectHidedLive:(id)a0;
- (void)asyncRequestAdWithParams:(id)a0 shouldRequest:(BOOL)a1 lastAsyncRequestTime:(double)a2 innerTrackParams:(id)a3 completion:(id /* block */)a4;
- (id)transferModeltoDataDict:(id)a0 floor:(long long)a1 dataType:(long long)a2;
- (id)htsTransferModeltoDataDict:(id)a0 dataType:(long long)a1;
- (id)playletTransferModeltoDataDict:(id)a0 floor:(long long)a1 dataType:(long long)a2;
- (id)lastShowedAdModelConfig;
- (void)saveLastShowedAdModelConfigWithModel:(id)a0;
- (void)updateLastshowedAdModelConfigWithModel:(id)a0;
- (id)currentIndexIdentifier;
- (long long)dolphinResultAnalyzeType;
- (id)modelUniqueIdentifier:(id)a0;
- (void)fillInRerankContext:(id)a0;
- (void)completeRerankTasks:(BOOL)a0 error:(id)a1 rerankIdentifier:(id)a2 rerankFloor:(long long)a3 operateType:(long long)a4 resultModel:(id)a5;
- (void).cxx_destruct;
- (void)startTimer;
- (void)cancelTimer;
- (void)updateTimer;
- (void)pauseTimer;
- (id)currentDataSource;
- (void)dealloc;

@end
