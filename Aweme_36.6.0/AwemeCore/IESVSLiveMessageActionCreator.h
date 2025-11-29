@class NSString, HTSLiveRoom;
@protocol IESLiveRoomService;

@interface IESVSLiveMessageActionCreator : IESVSRoomMessageActionCreator <IESLiveSeekAction, HTSLiveStreamPlayerAction, IESLiveMultiCameraAction>

@property (retain, nonatomic) HTSLiveRoom *roomModel;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)remoteRoomDataReady:(id)a0;
- (void)startMessageDispatch;
- (void)onStreamPause;
- (void)onStreamPlayIfIsLatestTime:(BOOL)a0;
- (void)onStreamProgressUpdate:(double)a0 start:(double)a1 latest:(double)a2 trackCurrentSEIts:(id)a3 callTrace:(id)a4;
- (void)onCameraDidChangeTo:(id)a0 source:(long long)a1;
- (void)onSeekEndIfIsLatestTime:(BOOL)a0;
- (void)startMessageDispatchSync;
- (void)startEarlier;
- (void)multiCameraStateChangeVisible:(BOOL)a0;
- (double)getCurrentWatchTime;
- (void)updateVSLiveRoom:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)start;

@end
