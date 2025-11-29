@class NSString, NSDictionary, NSMutableDictionary, NSSet, NSMutableSet;

@interface AWEFeedContinueBroadcastStateManager : NSObject

@property (retain, nonatomic) NSDictionary *config;
@property (nonatomic) long long limitCountWeek;
@property (nonatomic) long long limitCountDay;
@property (nonatomic) long long guideStyle;
@property (retain, nonatomic) NSString *triggerName;
@property (retain, nonatomic) NSMutableDictionary *showRecord;
@property (nonatomic) long long randomValue;
@property (retain, nonatomic) NSSet *randomRecord;
@property (retain, nonatomic) NSMutableSet *videoCheckRecord;

+ (id)sharedInstance;

- (BOOL)enableContinueGuide;
- (BOOL)canShowGuideWithCurrentStateForVideo:(id)a0 scene:(id)a1;
- (void)checkPadPitayaStateCompletion:(id /* block */)a0;
- (void)updateClickRecord;
- (void)updateShowRecord:(long long)a0;
- (BOOL)checkSyncStateWithCurrentStateForVideo:(id)a0 scene:(id)a1;
- (BOOL)needStopDeviceDiscoverWithScene:(id)a0;
- (BOOL)isTargetVideo:(id)a0 withScene:(id)a1;
- (BOOL)canForceChangeDiscoverResult;
- (void)monitorShowResult:(BOOL)a0 errorCode:(long long)a1 scene:(id)a2;
- (BOOL)isInCountLimit;
- (BOOL)isInvalidTimeRange;
- (void).cxx_destruct;
- (id)init;

@end
