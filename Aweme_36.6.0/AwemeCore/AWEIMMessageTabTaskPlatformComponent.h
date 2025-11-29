@class AWEIMTaskPlatformTracker, NSString;
@protocol IESLCMessageHandlerProtocol, AWEIMChatListInterface;

@interface AWEIMMessageTabTaskPlatformComponent : AWEIMComponentBase <AWEIMTaskCardManagerDelegate, AWEIMTaskCardManagerStickOnTopDelegate, IESLCMessageHandlerService, IESIMChatListBizCellInfoProtocol>

@property (retain, nonatomic) AWEIMTaskPlatformTracker *taskPlatformTracker;
@property (weak, nonatomic) id<AWEIMChatListInterface> chatListService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;

- (id)sessionIDList;
- (void)stickOnTopStateDidChange:(BOOL)a0 reason:(unsigned long long)a1;
- (BOOL)shouldStickOnTopByDefault;
- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)hostVC_viewDidDisappear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)p_handleReceivedPushServiceWithMsg:(id)a0;
- (void)handleTaskPlatformStickOnTopChange:(id)a0;
- (void)onCardDataChange;
- (void)updateStickOnTopState:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)stickOnTop;
- (void).cxx_destruct;
- (id)businessID;
- (void)dealloc;

@end
