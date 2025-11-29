@class NSLock, NSMutableDictionary, NSString;

@interface IESLiveGameCPIMMessageServiceImpl : NSObject <IESGCPLiveIMMessageService, HTSLiveMessageSubscriber>

@property (retain, nonatomic) NSMutableDictionary *subscribeDict;
@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addSubscriber:(id)a0 forMsgCls:(Class)a1;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
