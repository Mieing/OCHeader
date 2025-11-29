@class TTPushMessageReceiver;

@interface TTPushMessageDispatcher : NSObject

@property BOOL isTheFirstMessage;
@property unsigned long long lastMsgSequenceId;
@property (retain) TTPushMessageReceiver *msgReceiver;
@property BOOL isBroadcasting;

+ (void)constructMessageMetaInfo:(id)a0 meta_info:(void *)a1;
+ (void)assignMessageBaseProperties_:(id)a0 frame:(const void *)a1;
+ (void)assignPPMessageBaseObject:(id)a0 metaInfo:(const void *)a1;
+ (id)serializeObject:(id)a0;

- (void)setCustomizedMessageReceiver:(id)a0;
- (void)delegateMessage:(const void *)a0 pushManager:(id)a1;
- (void)setBroadcastingMessage:(BOOL)a0;
- (void)delegatePPMessage:(const void *)a0 metaInfo:(const void *)a1 serviceId:(int)a2 pushManager:(id)a3;
- (void)dispatchPPMessage:(const void *)a0 metaInfo:(const void *)a1 serviceId:(int)a2;
- (BOOL)receivedDuplicatedMessage:(const void *)a0;
- (void)handleUnknownMessage_:(const void *)a0;
- (void)broadcastReceivingMessage_:(const void *)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dispatchMessage:(const void *)a0;

@end
