@class HTSEventContext, NSTimer, IESLiveGCDTimer, NSDate;
@protocol IESLiveRoomService;

@interface IESLiveAudienceStreamStallChecker : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) BOOL stallMonitorEnable;
@property (nonatomic) long long stall_monitor_window_size;
@property (nonatomic) long long stall_monitor_downgrade_count_thresh;
@property (nonatomic) long long stall_monitor_downgrade_duration_thresh;
@property (nonatomic) long long stall_monitor_max_notice_count;
@property (nonatomic) BOOL degreeEnableForGameRoom;
@property (nonatomic) BOOL degreeEnableTipsForGameRoom;
@property (nonatomic) BOOL degreeEnableFullSceneForGameRoom;
@property (nonatomic) BOOL hasTriggerStallMonitor;
@property (retain, nonatomic) NSDate *startStallDate;
@property (nonatomic) long long currentStallTimes;
@property (nonatomic) double currentStallDuration;
@property (nonatomic) long long currentRoomNoticeTimes;
@property (retain, nonatomic) NSDate *stallTrackerEnterRoomDate;
@property (nonatomic) struct IESLiveVideoStallInfo { long long count; long long last_time; long long last_duration; long long total_duration; } stallInfo;
@property (nonatomic) BOOL enableTrackStallInfo;
@property (retain, nonatomic) IESLiveGCDTimer *gameRoomStallTimerNew;
@property (nonatomic) BOOL gameRoomIsShowHintView;
@property (retain, nonatomic) NSTimer *gameRoomHintViewShowTimer;
@property (nonatomic) long long gameRoomHintViewShowTimeMin;
@property (nonatomic) long long gameRoomHintViewCurrentShowTime;
@property (nonatomic) long long gameRoomStallTime;
@property (retain, nonatomic) HTSEventContext *pageContext;

- (void)didSetAttachingDIContext;
- (id)initWithRoomModel:(id)a0;
- (id)gameAudienceClarityDegradeInterface;
- (BOOL)isHorizontalStream;
- (void)roomWillClose;
- (void)streamPlayerLoadFirstFrame;
- (void)streamPlayerStartStall;
- (void)streamPlayerEndStall;
- (void)invalidateStallTimer;
- (void)_checkStall;
- (void)_trackVideoStallInfoAfterCloseRoom;
- (BOOL)enableStallMonitor;
- (void)_beginStallMonitor;
- (void)_streamPlayerEndStall;
- (BOOL)enableDegreeForGameRoom;
- (BOOL)shouldShowHintView:(BOOL)a0;
- (void)updateShowTime:(id)a0;
- (void)_trackStallDegradeResolutionToastShow:(id)a0;
- (BOOL)_streamStallNoticeCountReachMax;
- (void)_updateVideoStallInfo;
- (void)_hideHintView;
- (void)_trackDidStall;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)dealloc;

@end
