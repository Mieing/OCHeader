@class NSString, NSMutableDictionary;

@interface IESLiveDynamicWrdsRegisterServiceImpl : NSObject <IESLiveDataSyncDelegate, HTSLiveMessageSubscriber, IESLiveDynamicWrdsRegisterService>

@property (retain, nonatomic) NSMutableDictionary *wrdsRegisterMap;
@property (retain, nonatomic) NSMutableDictionary *contextMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribedSyncDataWithValue:(id)a0 version:(long long)a1;
- (void)subscribedSyncDataUpdatedWithValue:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (void)didSetAttachingDIContext;
- (void)addContextRegister:(id)a0 listenerId:(id)a1;
- (void)removeContextRegisterWithListenerId:(id)a0;
- (void)addSubscriberWithClassList:(id)a0 listenerId:(id)a1;
- (void)removeSubscriberWithClassList:(id)a0 listenerId:(id)a1;
- (BOOL)hasRegisterWrds:(id)a0 context:(id)a1;
- (BOOL)handleSubKeySubscriberIfNeed:(id)a0 context:(id)a1;
- (id)classNameWithClass:(Class)a0;
- (void)setupRegisterWrds:(id)a0 context:(id)a1;
- (void)registerWrdsWithMsgClassList:(id)a0 syncDataClassList:(id)a1;
- (BOOL)handleSubKeyUnSubscriberIfNeed:(id)a0 context:(id)a1;
- (void)removeRegisterWrds:(id)a0 context:(id)a1;
- (id)wrdsSetWithClassName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)messageReceived:(id)a0;

@end
