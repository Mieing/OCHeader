@class AWEHPFirstLandingTrackerInfo, AWEHPFirstLandingTrackerConfig;

@interface AWEHPFirstLandingTracker : NSObject

@property (retain, nonatomic) AWEHPFirstLandingTrackerConfig *config;
@property (retain, nonatomic) AWEHPFirstLandingTrackerInfo *firstInfo;
@property (retain, nonatomic) AWEHPFirstLandingTrackerInfo *secondInfo;

+ (void)startTracker;

- (id)p_generateTrackerInfo;
- (void)p_sendTrack;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (id)initWithConfig:(id)a0;

@end
