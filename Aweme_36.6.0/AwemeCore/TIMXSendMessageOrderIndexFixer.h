@class NSString, TIMXSDKInstance;

@interface TIMXSendMessageOrderIndexFixer : NSObject <TIMXSendMessageEventProtocol>

@property (weak, nonatomic) TIMXSDKInstance *r;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)nextOrderIDForConversation:(id)a0;
- (void)fixOrderIndexWithDBMessage:(id)a0 messageTemplate:(id)a1 conversation:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRootObject:(id)a0;

@end
