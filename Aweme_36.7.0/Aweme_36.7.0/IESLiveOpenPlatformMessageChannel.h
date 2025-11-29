@class IESLiveAAIGameAudienceMsgDispatcher, NSString;
@protocol IESLiveRoomService, IESLiveAAIGameAudienceMsgDispatcherService;

@interface IESLiveOpenPlatformMessageChannel : NSObject <IESLiveAAIGameAudienceMsgSubscriber, HTSLiveMessageSubscriber, IESLiveDataSyncDelegate>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLiveAAIGameAudienceMsgDispatcherService> dispatcherService;
@property (retain, nonatomic) IESLiveAAIGameAudienceMsgDispatcher *audienceMsgHandleDispatcher;
@property (nonatomic) BOOL hasReportStatusSEI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribedSyncDataWithValue:(id)a0 version:(long long)a1;
- (void)subscribedSyncDataUpdatedWithValue:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (void)didSetAttachingDIContext;
- (BOOL)audienceMsgDispatcher:(id)a0 blockAllMsgWithEntranceMsg:(id)a1;
- (void)audienceMsgDispatcher:(id)a0 receiveEntranceMsg:(id)a1;
- (void)audienceMsgDispatcher:(id)a0 receiveGameStart:(id)a1;
- (void)audienceMsgDispatcher:(id)a0 receiveGameStop:(id)a1;
- (void)audienceMsgDispatcher:(id)a0 receiveDuringGameMsg:(id)a1;
- (void)_setupMsgObserve;
- (void)p_handleInteractcontrolSyncdata:(id)a0;
- (void)_didReceiveCommonMessage:(id)a0;
- (void)_didReceiveAudienceMessage:(id)a0 msgType:(long long)a1;
- (void)audienceMsgDispatcher:(id)a0 receivePipelineEventId:(id)a1;
- (void)_didReceiveAnchorMessage:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (id)initWithRoom:(id)a0;

@end
