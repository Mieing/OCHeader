@class NSString, NSMutableDictionary;

@interface BDXBridgeLiveUpdateByteLinkListenerMethod : BDXBridgeMethod <HTSLiveMessageSubscriber>

@property (retain, nonatomic) NSMutableDictionary *containerInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (long long)authType;
- (id)init;
- (void)messageReceived:(id)a0;
- (id)methodName;

@end
