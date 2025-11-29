@class NSString, RTVXRRoomClockCorrectMessage, RxDeferred, NSNumber;
@protocol RTVXRRoomMessageSender, RxInjector, RTVXRControllerInjector;

@interface RTVXRRoomClockCorrectTask : NSObject <RTVXRRoomMessageSenderObserver>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXRRoomMessageSender> messageSender;
@property (readonly, nonatomic) RxDeferred *requestDeferred;
@property (retain, nonatomic) RTVXRRoomClockCorrectMessage *requestMessage;
@property (retain, nonatomic) RTVXRRoomClockCorrectMessage *replyMessage;
@property (readonly, copy, nonatomic) NSString *targetUserID;
@property (readonly, nonatomic) long long targetUserLocalTime;
@property (readonly, nonatomic) NSNumber *delayOfNetwork;
@property (readonly, nonatomic) NSNumber *clockDiff;
@property (readonly, nonatomic) long long lastUpdateTimestamp;
@property (readonly, nonatomic) BOOL isRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskWithTargetUserID:(id)a0 injector:(id)a1;

- (void)rtv_awakeFromControllerInjector;
- (void)messageSender:(id)a0 didReceiveMessage:(id)a1;
- (id)initWithTargetUserID:(id)a0;
- (void)__sendClockCorrectRequest;
- (void)__setupReplyMessage:(id)a0;
- (void).cxx_destruct;
- (id)invalidate;
- (id)timestamp;
- (id)fire;

@end
