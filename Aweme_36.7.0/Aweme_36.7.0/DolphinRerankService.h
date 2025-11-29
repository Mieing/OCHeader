@class NSArray, NSString, DolphinRerankConfiguration, DolphinRerankMemoryCache, NSDictionary, DolphinRerankTaskContext, NSMutableDictionary;
@protocol DolphinRerankDataSource, DolphinRerankDelegate;

@interface DolphinRerankService : NSObject

@property (copy, nonatomic) NSString *serviceName;
@property (retain, nonatomic) DolphinRerankConfiguration *configuration;
@property (retain, nonatomic) DolphinRerankMemoryCache *dolphinRerankMemoryCache;
@property (copy, nonatomic) id /* block */ autoRerankBlock;
@property (copy, nonatomic) NSDictionary *delayTaskName;
@property (copy, nonatomic) NSDictionary *callPitayaTaskName;
@property (retain, nonatomic) DolphinRerankTaskContext *currentTaskContext;
@property (nonatomic) BOOL pauseAutoRerankBackground;
@property (copy, nonatomic) NSDictionary *pitayaDataTemplate;
@property (retain, nonatomic) NSMutableDictionary *guaranteetParams;
@property (retain, nonatomic) NSMutableDictionary *noneGuaranteetParams;
@property (retain, nonatomic) NSMutableDictionary *rerankServiceWareHouse;
@property (weak, nonatomic) id<DolphinRerankDataSource> dataSource;
@property (weak, nonatomic) id<DolphinRerankDelegate> delegate;
@property (nonatomic) BOOL isRanking;
@property (copy, nonatomic) NSString *uniqueneid0_1_candidates;
@property (copy, nonatomic) NSString *uniqueneid0_1_candidates_exchange;
@property (copy, nonatomic) NSString *uniqueneid0_5;
@property (copy, nonatomic) NSString *uniqueneid0_5_exchange;
@property (copy, nonatomic) NSArray *testOutPut;

+ (void)recordSpecialModel:(id)a0 params:(id)a1;

- (void)onApplicationWillEnterForeground:(id)a0;
- (void)registerReRankBridgeWhenReady;
- (void)unregisterReRankBridge;
- (void)registerReRankBridge;
- (void)startDolphinRerank:(long long)a0 ignoreMinInterval:(BOOL)a1;
- (void)finishDolphinRerank:(BOOL)a0 errMessage:(id)a1;
- (void)pauseAutoRerankTimer;
- (void)setUpTypeOfTasks;
- (void)resumeAutoRerankTimer;
- (void)resetAutoRerankTimer;
- (long long)operateTypeFromTaskName:(id)a0;
- (BOOL)shouldStopRerankTask:(id)a0 resultModel:(id)a1;
- (BOOL)taskTypeIsDelayTask:(id)a0;
- (BOOL)taskTypeCallPitaya:(id)a0;
- (BOOL)shouldStopSupplementDataChange:(id)a0 resultModel:(id)a1;
- (BOOL)shouldStopRerankInStructMode:(id)a0 resultModel:(id)a1;
- (BOOL)resultIsValid:(id)a0 resultModel:(id)a1;
- (void)cancelDolphinReranking;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithName:(id)a0 configuration:(id)a1;
- (void)onApplicationDidEnterBackground:(id)a0;

@end
