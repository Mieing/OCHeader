@class NSString;

@interface AWEIMAutoSearchGiphyWarmupComponent : AWEIMComponentBase

@property (nonatomic) long long warmupCount;
@property (nonatomic) long long warmupOnceCount;
@property (nonatomic) long long warmupDelay;
@property (nonatomic) long long warmupInterval;
@property (nonatomic) long long cacheExpireInterval;
@property (nonatomic) unsigned long long conversationType;
@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) BOOL enableStrategyOpt;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_afterFirstRender;
- (BOOL)p_dayTimeValid;
- (void)p_warmupIfNeeded;
- (id)p_setupManagerIfNeeded;
- (void)p_startWarmupIfNeededWithMgr:(id)a0;
- (void)p_warmUpKeys:(id)a0;
- (void).cxx_destruct;
- (void)warmup;

@end
