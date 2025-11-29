@class NSTimer, NSMutableDictionary;
@protocol AWELandscapeGuideManagerDelegate, AWELandscapeGuideProtocol;

@interface AWELandscapeGuideManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventMapItemDict;
@property (retain, nonatomic) id<AWELandscapeGuideProtocol> currentGuide;
@property (retain, nonatomic) NSTimer *twentySecondsTimer;
@property (retain, nonatomic) NSTimer *thirtySecondsTimer;
@property (retain, nonatomic) NSTimer *pauseThreeSecondsTimer;
@property (nonatomic) BOOL shouldTriggerTwentySeconds;
@property (nonatomic) BOOL shouldTriggerThirtySeconds;
@property (nonatomic) BOOL shouldTriggerPauseThreeSeconds;
@property (weak, nonatomic) id<AWELandscapeGuideManagerDelegate> delegate;

- (void)triggerEvent:(long long)a0;
- (void)hideGuide;
- (void)triggerEventWithQuiet:(BOOL)a0;
- (void)resetPauseTimer:(BOOL)a0;
- (void)resetStayTimer:(BOOL)a0;
- (void)registerGuide:(id)a0 triggerEvent:(long long)a1;
- (BOOL)hasShownGuideToday:(id)a0;
- (void).cxx_destruct;

@end
