@class NSString, NSMutableDictionary;

@interface IESLiveRegisterMessageLatchMethodImpl : IESLiveRegisterMessageLatchMethod <HTSLiveMessageSubscriber, IESLivePreStreamIMMessageSubscriber, IESLiveSearchPreStreamMessageSubscriber>

@property (retain, nonatomic) NSMutableDictionary *messageModelMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)onMessageReceivce:(id)a0 withDict:(id)a1;
- (void)onMessageReceivce:(id)a0 messageStr:(id)a1;
- (id)getRegisterMessageLatchAdaptor;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
