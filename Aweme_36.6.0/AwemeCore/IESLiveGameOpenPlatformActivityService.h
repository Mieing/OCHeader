@class NSString, IESLiveGameActivityComponentLoader, NSMutableArray;

@interface IESLiveGameOpenPlatformActivityService : NSObject <HTSLiveMessageSubscriber, IESLiveGameActivityService>

@property (retain, nonatomic) IESLiveGameActivityComponentLoader *activityLoader;
@property (retain, nonatomic) NSMutableArray *messageQueue;
@property (nonatomic) long long operationState;
@property (nonatomic) long long latestHandleMessageId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)startNewTaskIfNeeded;
- (void)addMessageObserve;
- (void)startHandleActivityMessage;
- (void)handleCounterMessage:(id)a0;
- (void).cxx_destruct;
- (void)addMessage:(id)a0;
- (void)messageReceived:(id)a0;

@end
