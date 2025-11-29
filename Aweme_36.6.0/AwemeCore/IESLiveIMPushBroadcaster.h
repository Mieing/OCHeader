@class IESLiveIMBroadcastDecoder, NSObject, IESLiveIMMessageNormalDispatcher;
@protocol OS_dispatch_queue;

@interface IESLiveIMPushBroadcaster : NSObject

@property (retain, nonatomic) IESLiveIMMessageNormalDispatcher *dispatcher;
@property (retain, nonatomic) IESLiveIMBroadcastDecoder *decoder;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *decodeQueue;
@property (nonatomic) long long serviceId;
@property (nonatomic) long long methodId;

+ (id)sharedManager;

- (void)addSubscriber:(id)a0 forMessages:(id)a1;
- (void)onFrontierReceivingMessage:(id)a0;
- (void)setupEnvironmentWithBOE:(BOOL)a0;
- (void)inDataQueue:(id /* block */)a0;
- (BOOL)isValidMessageForBroadcast:(id)a0;
- (void)processBroadcastMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
