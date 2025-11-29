@class NSArray, NSMutableDictionary, MMKV;
@protocol AWEMessageReachInternalAbilityProtocol;

@interface AWEMessageReachFrequencyManager : NSObject

@property (weak, nonatomic) id<AWEMessageReachInternalAbilityProtocol> config;
@property (retain, nonatomic) NSMutableDictionary *requestTimeMap;
@property (nonatomic) double globalLastRequestTime;
@property (readonly, nonatomic) MMKV *mmkv;
@property (nonatomic) BOOL loadCacheComplete;
@property (retain, nonatomic) NSArray *frequencyControlModelArray;

- (void)messageReachColdLaunchLoadCacheComplete:(id)a0;
- (BOOL)verifyRequestFrequencyControlWithTriggerEvent:(id)a0 source:(id)a1;
- (void)recordRequestTime:(double)a0 triggerEvent:(id)a1 source:(id)a2;
- (void)loadCacheForColdLaunch:(id /* block */)a0;
- (void)tryLoadCache;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
