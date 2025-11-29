@class NSString;
@protocol IESLCPushMessageReceiverDelegate;

@interface IESLCPushMessageReceiver : TTPushMessageReceiver <IESLCPushMessageReceiverProtocol>

@property (weak, nonatomic) id<IESLCPushMessageReceiverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)dispatch:(int)a0 method:(int)a1 payloadEncoding:(const void *)a2 payloadType:(const void *)a3 payload:(const void *)a4 seqid:(unsigned long long)a5 logid:(unsigned long long)a6 headers:(struct shared_ptr<std::map<std::string, std::string>> { void *x0; struct __shared_weak_count *x1; })a7;
- (void).cxx_destruct;

@end
