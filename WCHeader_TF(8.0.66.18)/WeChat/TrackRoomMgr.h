@class NSString, TrackPOIItem, MMTimer;

@interface TrackRoomMgr : MMUserService <PBMessageObserverDelegate, ILocationMgrExt, MMServiceProtocol> {
    BOOL _isJoining;
    BOOL _isRefreshing;
    BOOL _isInitiator;
    int _nextState;
    int _currentState;
    unsigned long long _headingTag;
    unsigned long long _locationTag;
    int _retryCount;
    double _trueHeading;
    double _course;
    NSString *_uniqueTrackRoomID;
    TrackPOIItem *_trackPOIItem;
    struct CLLocationCoordinate2D { double latitude; double longitude; } _uploadCoordiante;
    MMTimer *_refreshTimer;
    unsigned int _scene;
    BOOL _isNeedResumeWXMuisc;
    BOOL _isNeedResumeFinderMinimize;
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
- (void)reportFromScene:(long long)a0 code:(long long)a1 isRecover:(BOOL)a2;
- (void)report:(long long)a0 code:(long long)a1;
- (void).cxx_destruct;

@end
