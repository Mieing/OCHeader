@class NSString, NSHashTable, IESLiveGCDTimer, NSObject, NSMutableArray;
@protocol IESVSMessageFilter, IESLiveUserService, IESLiveIMMessageReciever, OS_dispatch_queue;

@interface IESVSMessageDispatcher : NSObject <IESVSMessageDispatchProvider, IESLiveIMMessageReciever>

@property (retain, nonatomic) NSHashTable *subscribersForAll;
@property (retain, nonatomic) NSMutableArray *messages;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *messageProcessQueue;
@property (nonatomic) double dispatchInterval;
@property (nonatomic) long long dispatchCount;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) BOOL messageDispatchStarted;
@property (retain, nonatomic) id<IESLiveUserService> userService;
@property (retain, nonatomic) id<IESVSMessageFilter> messageFilter;
@property (copy, nonatomic) id /* block */ onMessageDispatch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveIMMessageReciever> nextReceiver;

- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)a0;
- (void)addSubscriberForAll:(id)a0;
- (void)didRecieveMessages:(id)a0;
- (void)startDispatch;
- (void)stopDispatch;
- (void)doTimerAction;
- (BOOL)shouldDispatchMessage:(id)a0;
- (void)messageFectchedWithSeekByUser;
- (BOOL)shouldHandleSelfShowMessage:(id)a0;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)resetFilter;
- (void)startTimerWithInterval:(double)a0;

@end
