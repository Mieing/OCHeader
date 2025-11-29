@class NSArray, NSString;
@protocol IESLivePiperProtocol, IESLiveDynamicWrdsRegisterService;

@interface IESLiveRegisterWrdsMethodImpl : IESLiveRegisterWrdsMethod <IESLiveDataSyncDelegate, HTSLiveMessageSubscriber>

@property (copy, nonatomic) NSArray *messageTypes;
@property (weak, nonatomic) id<IESLivePiperProtocol> piper;
@property (copy, nonatomic) NSString *listenerId;
@property (weak, nonatomic) id<IESLiveDynamicWrdsRegisterService> dynamicWrdsRegisterService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribedSyncDataWithValue:(id)a0 version:(long long)a1;
- (void)subscribedSyncDataUpdatedWithValue:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)handleSubKeySubscriberIfNeed:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)messageReceived:(id)a0;

@end
