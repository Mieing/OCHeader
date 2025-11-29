@class NSArray, HTSEventContext, IESLiveStreamColorMonitor, NSString;
@protocol IESLiveRoomService;

@interface IESLiveAudienceWatchTimeTracker : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) BOOL hadSendAutoLiveEvent;
@property (nonatomic) BOOL isVRCamera;
@property (nonatomic) BOOL enableTrackXSeconds;
@property (retain, nonatomic) NSArray *watchXSecondsConfig;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveStreamColorMonitor *colorMonitor;
@property (nonatomic) BOOL isAutoLandscapeFromPreview;
@property (copy, nonatomic) NSString *clickMethod;

- (id)initWithRoomModel:(id)a0;
- (void)liveFullScreenWatchShouldTrackWithDuration:(double)a0;
- (BOOL)isInMseq;
- (BOOL)isInOffcialMseq;
- (void)trackWatchOneMin;
- (void)trackLiveVideoAutoPlayIfNeededWithDuration:(double)a0;
- (void)trackWatchTenSec;
- (void)trackWatchXSeconds:(long long)a0;
- (void)trackLiveVSDurationWhenPause:(double)a0;
- (void)trackLiveDurationWithDuration:(double)a0 ExtraParams:(id)a1;
- (void)trackLiveDurationAllRejectPause:(double)a0;
- (void)trackLiveVSDurationWhenRotate:(double)a0;
- (void)trackLiveVSLandscapeAndPortraitPlayDuration:(double)a0;
- (void)trackLiveVSMachinePlayTime:(double)a0;
- (void)trackLiveVSContentDurationIfNeeded:(double)a0;
- (void)trackLiveVideoOverDuration:(double)a0 trigger:(id)a1;
- (void)trackLiveBackstageWatchDuration:(double)a0 endType:(id)a1;
- (id)liveVSTrackParamsWithDuration:(double)a0;
- (void).cxx_destruct;

@end
