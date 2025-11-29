@class AWESiriProbabilityThrottler, NSMutableDictionary;

@interface AWESiriFrequencyController : NSObject

@property (retain, nonatomic) NSMutableDictionary *sceneRules;
@property (nonatomic) BOOL isFeedReady;
@property (retain, nonatomic) AWESiriProbabilityThrottler *throttler;

+ (id)sharedInstance;

- (void)onAppFeedReady;
- (BOOL)canDonateForScene:(id)a0 frequencyLimitNum:(long long)a1;
- (BOOL)shouldThrottleDueToResourcePressure:(unsigned long long)a0;
- (id)makeConfigFetchDecision:(id)a0;
- (id)makeDonationDecision:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
