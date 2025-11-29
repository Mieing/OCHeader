@class NSString;

@interface IESLiveRevenueInteractDurationTrackHelper : NSObject <HTSLiveAudienceActions, HTSLiveStreamPlayerAction>

@property (nonatomic) unsigned long long source;
@property (nonatomic) double startWatchTime;
@property (nonatomic) double startSmallWindowTime;
@property (nonatomic) double startBackgroundTime;
@property (nonatomic) double invalidWatchDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)liveDidEnterBackground;
- (void)liveWillEnterForground;
- (void)playerWillPlayInSmallWindow;
- (void)playerDidEndplayInSmallWindow;
- (void)startDurationTracker;
- (double)endDurationTracker;
- (id)initWithDIContext:(id)a0 source:(unsigned long long)a1;
- (void)logEvent:(id)a0 extra:(id)a1;
- (void)addInvalidWatchDurationWithStartTime:(double)a0;

@end
