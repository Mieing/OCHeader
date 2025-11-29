@class NSString, IESLivePublicScreenNotificationCenter, IESLivePublicScreenNodeManager, IESLivePublicScreenContext, NSNumber;
@protocol IESLivePSAttachmentService, IESLivePublicScreenASRMsgCollectionProvider;

@interface IESLivePublicScreenDataFlowManager : NSObject <HTSLiveMessageSubscriber, IESLivePSAttachmentAction, IESLivePublicScreenInsertDataHandlerDelegate>

@property (retain, nonatomic) IESLivePublicScreenContext *context;
@property (retain, nonatomic) IESLivePublicScreenNodeManager *nodeManager;
@property (retain, nonatomic) id<IESLivePSAttachmentService> attachmentManager;
@property (retain, nonatomic) IESLivePublicScreenNotificationCenter *notifyCenter;
@property (weak, nonatomic) id<IESLivePublicScreenASRMsgCollectionProvider> asrMsgCollectionProvider;
@property (nonatomic) BOOL didStopRefresh;
@property (retain, nonatomic) NSNumber *publicScreenID;
@property (nonatomic) BOOL enterRoomOptRefreshDetached;
@property (nonatomic) BOOL messageReceived;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleDeleteMessage:(id)a0;
- (void)removeMessageHandler:(id)a0;
- (void)addSubscriber:(id)a0 forEvent:(id)a1;
- (BOOL)convergedModule;
- (void)handlePublicScreenMessage:(id)a0;
- (id)currentRefreshConfig;
- (void)startRefreshWithCaller:(id)a0;
- (void)stopCommitWithCaller:(id)a0;
- (void)updateNodesSizeWithMaxLayoutWidth:(double)a0 completion:(id /* block */)a1;
- (void)processNodeWithTask:(id)a0;
- (void)startCommitWithCaller:(id)a0;
- (void)updateRefreshConfig:(id)a0;
- (id)allBufferMessages;
- (id)allBufferNodes;
- (void)addMessageHandler:(id)a0;
- (void)addNodeHandler:(id)a0;
- (void)stopRefreshWithCaller:(id)a0;
- (void)removeAllBuffer;
- (void)removeDuplicateMessageBuffer;
- (void)removeRefreshConfigWithPriority:(unsigned long long)a0;
- (void)processNodeWithDirectlyShowStrategy:(id)a0;
- (void)setIgnoreApplicationStateInRefresh:(BOOL)a0;
- (void)startConsumeMessageWithCaller:(id)a0;
- (void)immediateRefreshAndResetTimer;
- (void)showPublicScreenMessageImmediately:(id)a0;
- (id)initWithPublicScreenInfo:(id)a0 styleConfig:(id)a1 dataFlowConfig:(id)a2 delegate:(id)a3 attachments:(id)a4 diContext:(id)a5;
- (void)setupWithPublicScreenContext:(id)a0 delegate:(id)a1;
- (void)handleAttachments;
- (id)initWithPublicScreenContext:(id)a0 delegate:(id)a1 diContext:(id)a2;
- (void)addSubscriberForMessages:(id)a0;
- (void)updateNodeStyleConfig:(id)a0 completion:(id /* block */)a1;
- (void)stopConsumeMessageWithCaller:(id)a0;
- (void)removeNodeHandler:(id)a0;
- (void)attachHeatTimerIfNeeded;
- (void)attachMessageAndNodeHandler;
- (void)attachRefreshStrategy;
- (void)attachASRMsgColletion;
- (void)attachSquareMsgColletion;
- (void)setupDefaultDataHandler;
- (id)initWithPublicScreenInfo:(id)a0 styleConfig:(id)a1 dataFlowConfig:(id)a2 delegate:(id)a3 diContext:(id)a4;
- (void).cxx_destruct;
- (void)removeSubscriber:(id)a0;
- (void)messageReceived:(id)a0;

@end
