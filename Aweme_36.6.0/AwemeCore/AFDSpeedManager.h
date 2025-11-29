@class NSString;

@interface AFDSpeedManager : NSObject <AFDSpeedManagerProtocol>

@property (nonatomic) BOOL isLastVideoDurationSatisfied;
@property (nonatomic) double currentSpeed;
@property (retain, nonatomic) NSString *isLockedSpeedAwemeID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setSpeedModeNextEnterMethod:(id)a0;
+ (void)trackSpeedModePlayTimeWithModel:(id)a0 params:(id)a1;
+ (id)getSpeedModeNextEnterMethod;
+ (BOOL)isCurrentVideoDurationSatisfiedWithModel:(id)a0;
+ (double)videoDurationThreshold;
+ (void)notificationToResetSpeedModeStartNewTimestamp;
+ (id)sharedInstance;

- (double)inheritedSpeedWhenSlideHorizontallyWithAweme:(id)a0 referString:(id)a1;
- (void)updateCurrentVideoInfoWithAweme:(id)a0 speed:(double)a1;
- (BOOL)shouldInheritHorizontallyWithAweme:(id)a0;
- (double)inheritedSpeedWhenSlideVerticallyWithAweme:(id)a0 referString:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
