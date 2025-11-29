@class NSString;

@interface IESLiveAnchorPerfTrackImpl : NSObject <IESLiveAnchorPerfTrackService>

@property (nonatomic) double launchTime;
@property (nonatomic) double startLiveTime;
@property (nonatomic) double closeLiveTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupGuideLaunchTime;
- (long long)currentTimeFromGuideLaunchTime;
- (void)trackDurationFromGuideLaunchTimeWithStage:(id)a0 params:(id)a1;
- (void)setupStartLiveTime;
- (long long)currentTimeFromStartLiveTime;
- (void)trackDurationFromStartLiveTimeWithStage:(id)a0 params:(id)a1;
- (void)setupCloseLiveTime;
- (long long)currentTimeFromCloseLiveTime;
- (void)trackDurationFromCloseLiveTimeWithStage:(id)a0 params:(id)a1;
- (void)trackStage:(id)a0 duration:(long long)a1 params:(id)a2;
- (void)trackStage:(id)a0 params:(id)a1;
- (void)trackPerfWithStage:(id)a0 params:(id)a1;

@end
