@class NSString, MMTimer, TrackRoomReportParam, TrackPOIItem;

@interface TrackRoomMgr : MMUserService <PBMessageObserverDelegate, ILocationMgrExt, MMServiceProtocol> {
    BOOL _isJoining;
    BOOL _isRefreshing;
    int _nextState;
    int _currentState;
    unsigned long long _headingTag;
    unsigned long long _locationTag;
    int _retryCount;
    double _trueHeading;
    double _course;
    NSString *_uniqueTrackRoomID;
    long long _joinTimestamp;
    long long _onlineUserCount;
    TrackPOIItem *_trackPOIItem;
    struct CLLocationCoordinate2D { double latitude; double longitude; } _uploadCoordiante;
    MMTimer *_refreshTimer;
    unsigned int _scene;
    BOOL _isNeedResumeWXMuisc;
    BOOL _isNeedResumeFinderMinimize;
    TrackRoomReportParam *_exitReportParam;
}

@property (readonly, nonatomic) NSString *chatname;
@property (readonly, nonatomic) NSString *trackRoomID;
@property (readonly, nonatomic) double heading;
@property (readonly, nonatomic) BOOL isUploading;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (readonly, nonatomic) unsigned int refreshTimeInterval;
@property (readonly, nonatomic) TrackPOIItem *roomPOI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportAction:(long long)a0;
- (void)reportRetryAction:(long long)a0;
- (void)reportTimeAction:(long long)a0 time:(unsigned long long)a1;
- (void)reportExitAction:(long long)a0;
- (id)init;
- (void)dealloc;
- (void)enterBackground;
- (void)enterForeground;
- (int)openTrackRoom:(id)a0 POIItem:(id)a1 Scene:(unsigned int)a2;
- (void)resumeTrackRoom:(unsigned int)a0;
- (void)collapseTrackRoom;
- (int)setTrackRoomState:(int)a0;
- (void)setUploadCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (int)closeTrackRoom:(unsigned int)a0;
- (int)onRoomStateChanging:(int)a0;
- (void)setCurrentState:(int)a0;
- (void)startUpdateTrueHeading;
- (void)stopUpdateTrueHeading;
- (void)startUpdateCourse;
- (void)stopUpdateCourse;
- (int)joinTrackRoom:(id)a0;
- (int)refreshTrackRoomWithType:(int)a0;
- (void)onTimerRefreshTrackRoom;
- (int)exitTrackRoom:(unsigned int)a0;
- (void)retryChangeState;
- (void)handleJoinTrackRoomResponse:(id)a0;
- (void)handleRefreshTrackRoomResponse:(id)a0;
- (void)handleExitTrackRoomResponse:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onHeadingChanged:(id)a0 withTag:(unsigned long long)a1;
- (void)onHeadingError:(int)a0 withTag:(unsigned long long)a1;
- (void)onGPSLocationChanged:(id)a0 withTag:(unsigned long long)a1;
- (void)reportScene:(long long)a0 code:(long long)a1 isRecover:(BOOL)a2 chatname:(id)a3 roomId:(id)a4 uniqueRoomId:(id)a5 joinTimestamp:(long long)a6 onlineUserCount:(long long)a7 isRoomCreate:(BOOL)a8 isRoomDestroy:(BOOL)a9;
- (void)reportType:(long long)a0 code:(long long)a1 chatname:(id)a2 roomId:(id)a3 uniqueRoomId:(id)a4 joinTimestamp:(long long)a5 onlineUserCount:(long long)a6 isRoomCreate:(BOOL)a7 isRoomDestroy:(BOOL)a8;
- (void)reportParam:(id)a0;
- (id)createTrackRoomReportParamType:(long long)a0 code:(long long)a1 chatname:(id)a2 roomId:(id)a3 uniqueRoomId:(id)a4 joinTimestamp:(long long)a5 onlineUserCount:(long long)a6 isRoomCreate:(BOOL)a7 isRoomDestroy:(BOOL)a8;
- (void).cxx_destruct;

@end
