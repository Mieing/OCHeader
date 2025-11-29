@class NSString, IESLiveGuideModel, IESLiveEnterRoomSequenceQueue, IESLiveGuideContainerContext, CreateInfoResponse_CreateInfo;
@protocol IESLiveGuideActions;

@interface IESLiveGuideActionDispatchModule : IESLiveGuideExecutionBaseModule <IESLiveGuideProvider, IESLiveGuideOpenLiveService>

@property (retain, nonatomic) id<IESLiveGuideActions> guideActionDispatcher;
@property (retain, nonatomic) IESLiveGuideContainerContext *containerContext;
@property (copy, nonatomic) id /* block */ buildCameraAfterPassAuthBlock;
@property (retain, nonatomic) IESLiveEnterRoomSequenceQueue *enterRoomSequenceQueue;
@property (nonatomic) BOOL isCurrentlyInLiveTab;
@property (readonly, nonatomic) IESLiveGuideModel *guideModel;
@property (readonly, nonatomic) CreateInfoResponse_CreateInfo *openLiveModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)changeLiveType:(unsigned long long)a0;
- (void)buildCameraAfterPassCameraAuth;
- (id)beforeLiveTrackContent;
- (BOOL)isVCInLiveTab;
- (void)willSwitchToOtherTab;
- (void)willSwitchToLiveTab;
- (void)cameraDidSet;
- (void)willCreateAnchorLiveRoom:(id)a0 anchorRoomContext:(id)a1;
- (void)willEnterAnchorLiveRoom;
- (void)handleLiveTypeChange:(unsigned long long)a0;
- (void)willCloseGuideVC;
- (void)subscribeExecutionMessage;
- (void)buildCameraAfterPassAuth:(id /* block */)a0;
- (void)didBootLoaderCompleted;
- (void)willStartOpenLive;
- (void)sendLiveTypeDidChangeMsg:(unsigned long long)a0;
- (void)initialize:(id)a0 params:(id)a1;
- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
