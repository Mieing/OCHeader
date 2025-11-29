@class NSString, TrackRoomView;

@interface TrackRoomUIManager : MMUserService <TrackRoomViewDelegate, IVOIPUILogicMgrExt, MonoServiceLogicExt, MMLiveTaskMgrExt, MMServiceProtocol> {
    TrackRoomView *_trackRoomView;
}

@property (nonatomic) BOOL exitAtHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)openTrackRoom:(id)a0 POIInfo:(id)a1 Scene:(unsigned int)a2;
- (void)closeTrackRoomView:(unsigned int)a0 reason:(unsigned int)a1;
- (void)showTrackRoomView;
- (void)hideTrackRoomView;
- (BOOL)isShowingTrackRoom;
- (void)autoExitAtHidden;
- (void)onTrackRoomViewClose;
- (void)onTrackRoomViewHide;
- (void)cleanResource;
- (void)onServiceMemoryWarning;
- (void)onVideoVoipViewDidAppear:(id)a0;
- (void)onVideoVoipViewDisappear;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceVoipWillStart;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)onMonoServiceDidEnd;
- (void)onMMLiveWillStart;
- (void).cxx_destruct;

@end
