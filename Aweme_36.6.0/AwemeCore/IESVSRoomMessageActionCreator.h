@class NSNumber, NSString, IESLiveIMMessageDispatcher, IESLiveDataSyncManager, IESVSMessageFilter, IESVSMessageFakedFilter, IESVSSeekIMMessageClient, IESLiveIMMessageClient, HTSLiveMessageConfigImp, IESVSMessageDispatcher;
@protocol IESLiveRoomService, IESLiveMonitor, IESVSMessageActionContextProtocol;

@interface IESVSRoomMessageActionCreator : NSObject <IESLiveMessageActionCreatorProtocol> {
    IESVSMessageFilter *_messageDuplicatedFilter;
    IESVSMessageFakedFilter *_messageFakedFilter;
}

@property (retain, nonatomic) id<IESVSMessageActionContextProtocol> componentContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSString *cameraID;
@property (retain, nonatomic) NSNumber *episodeID;
@property (retain, nonatomic) NSNumber *seasonID;
@property (retain, nonatomic) NSNumber *episodeStage;
@property (retain, nonatomic) NSNumber *playbackCameraID;
@property (retain, nonatomic) NSNumber *groupID;
@property (retain, nonatomic) HTSLiveMessageConfigImp *realMessageConfig;
@property (retain, nonatomic) IESLiveIMMessageDispatcher *realIMDispatcher;
@property (retain, nonatomic) IESLiveIMMessageClient *realIMClient;
@property (retain, nonatomic) IESVSMessageDispatcher *seekMessageDispatcher;
@property (retain, nonatomic) HTSLiveMessageConfigImp *seekMessageConfig;
@property (retain, nonatomic) IESVSSeekIMMessageClient *seekIMClient;
@property (retain, nonatomic) IESLiveDataSyncManager *wrdsManager;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (nonatomic) BOOL isFirstPlay;
@property (nonatomic) long long offsetBegin;
@property (nonatomic) long long offsetEnd;
@property (retain, nonatomic) NSString *currentFetchCursor;
@property (nonatomic) long long fetchSwitchDiffTime;
@property (nonatomic) BOOL isMatchSubCamera;
@property (nonatomic) BOOL isSeekByUser;
@property (nonatomic) BOOL enableStartEarlier;
@property (nonatomic) BOOL enableMessageReplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)remoteRoomDataReady:(id)a0;
- (void)logEvent:(id)a0 params:(id)a1;
- (void)startMessageDispatch;
- (void)stopMessageDispatch;
- (void)addFakeMessage:(id)a0;
- (id)initWithDIContext:(id)a0 config:(id)a1;
- (void)startMessageDispatchSync;
- (void)stopMessageReplay;
- (void)startEarlier;
- (void)startMessageReplay;
- (void)doMessageProcess:(id)a0;
- (void)monitorMessageDelayTimeIfNeeded:(id)a0;
- (void)loadMessageClientWithRoomID:(id)a0 episodeID:(id)a1 seasonID:(id)a2 cameraID:(id)a3 groupID:(id)a4 vsScene:(long long)a5;
- (BOOL)isRoomPhaseFirstPlay;
- (void)updateCurrentFlowTime:(long long)a0;
- (BOOL)isRoomPhasePlayback;
- (void)updateVSLiveRoom:(id)a0;
- (void)loadRealTimeMessageClientWithVSScene:(long long)a0;
- (void)loadSeekTimeMessageClientWithVSScene:(long long)a0;
- (BOOL)shouldDispatchRealTimeMessage:(id)a0;
- (BOOL)isSeekMessageClientRunning;
- (void)updateVSVideoRoom:(id)a0;
- (void)loadPlaybackMessageClientWithRoomID:(id)a0 episodeID:(id)a1 seasonID:(id)a2 playbackCameraID:(id)a3 groupID:(id)a4 vsScene:(long long)a5;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)stop;
- (void)start;

@end
