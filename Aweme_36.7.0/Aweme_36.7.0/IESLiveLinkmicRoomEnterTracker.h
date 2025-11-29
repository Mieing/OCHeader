@class NSNumber, NSString;

@interface IESLiveLinkmicRoomEnterTracker : NSObject <IESLiveLinkmicRoomEnterTrackerService>

@property (retain, nonatomic) NSNumber *roomID;
@property (nonatomic) BOOL roomTracked;
@property (nonatomic) BOOL midLoaded;
@property (nonatomic) BOOL bgLoaded;
@property (nonatomic) BOOL listLoaded;
@property (nonatomic) BOOL ktvMVLoaded;
@property (nonatomic) BOOL isPreview;
@property (nonatomic) BOOL isFromSlide;
@property (nonatomic) BOOL isFromPreload;
@property (nonatomic) double startTime;
@property (nonatomic) double midTime;
@property (nonatomic) double endTime;
@property (nonatomic) long long seatDuration;
@property (nonatomic) long long bgDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)clickBegin:(id)a0;
- (void)scrollBegin:(id)a0 isPreview:(BOOL)a1;
- (void)roomLoadBegin:(id)a0;
- (void)backgroudLoadEnd:(id)a0;
- (BOOL)isNotSameRoom:(id)a0;
- (void)guestListLoadEnd:(id)a0;
- (void)ktvMVLoadEnd:(id)a0;
- (void)updateFromPreload;
- (void)trackUserLeave:(long long)a0;
- (void)trackUserLeaveForTea:(long long)a0;
- (void)trackTimeIfNeed;
- (void)trackBGForTea:(id)a0 duration:(long long)a1;
- (void)trackForTea:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isRecording;
- (id)init;
- (void)clean;

@end
