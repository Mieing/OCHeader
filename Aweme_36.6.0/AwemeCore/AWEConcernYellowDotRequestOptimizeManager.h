@class NSString;

@interface AWEConcernYellowDotRequestOptimizeManager : NSObject <AWEUserMessage>

@property (nonatomic) double lastTimestamp;
@property (nonatomic) BOOL shouldFobidRequestOptimize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)didFinishLogoutWithUid:(id)a0;
- (double)lastRequestTimestamp;
- (long long)yellowDotBadgeType;
- (long long)yellowDotFrequency;
- (void)setLastRequestTimestamp:(double)a0;
- (id)yellowDotRequestOptimizeSettings;
- (id)followYellowPointRequestOptimizeInfoWithSource:(long long)a0;
- (id)familiarYellowPointRequestOptimizeSourceTypeStrWithFeedSourceType:(id)a0;
- (id)yellowPointRequestOptimizeInfoWithFamiliar:(id)a0 follow:(id)a1 source:(long long)a2;
- (id)init;
- (void)dealloc;

@end
