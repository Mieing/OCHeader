@class HTSLiveMessageHandler, NSString, IESLiveComponentContext;
@protocol IESLiveRoomService;

@interface IESLiveGameOpenPlatformAnchorDebugHandler : NSObject <HTSLiveMessageSubscriber, IESLiveGameOpenPlatformAppInstanceLifeCycleObserver>

@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSLiveMessageHandler *messageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)appInstance:(id)a0 didSwitchStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (void)setUpObservers;
- (id)pr_loadGameDevelopMessageHandler;
- (BOOL)pr_validMessageInfo:(id)a0;
- (id)initWithComponentContext:(id)a0 eventContext:(id)a1 room:(id)a2;
- (void)addGamePlatformSubscriber;
- (void).cxx_destruct;
- (void)dealloc;
- (void)messageReceived:(id)a0;

@end
