@class NSString, NSMutableDictionary;

@interface IESECContext : NSObject <IESECDIContext, IESECEventContext, IESECContext>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id messageCenter;
@property (retain, nonatomic) id serviceHolder;
@property (retain, nonatomic) id lazyRegisterMap;
@property (weak, nonatomic) IESECContext *parentContext;
@property (retain, nonatomic) NSMutableDictionary *eventSubscribers;
@property (nonatomic) BOOL openWithSaaS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)subscribeEventNamed:(id)a0 callback:(id /* block */)a1;
- (id)messageObjectWithProtocol:(id)a0;
- (void)registerMessageObject:(id)a0 toProtocol:(id)a1;
- (BOOL)sendEventWithName:(id)a0 params:(id)a1;
- (id)createProxyAndBindService:(Class)a0 toProtocol:(id)a1;
- (void)bindUndefinedService:(Class)a0 toProtocol:(id)a1;
- (void)attachToParentContext:(id)a0;
- (void)of:(id)a0;
- (id)_findOrAddServiceWithClass:(Class)a0 toProtocol:(id)a1;
- (id)_addServiceWithClass:(Class)a0 toProtocol:(id)a1;
- (void)unRegisterMessageObject:(id)a0 toProtocol:(id)a1;
- (id)p_messageCenter;
- (id)messageObjectWithUndefinedProtocol:(id)a0;
- (id)p_lazyRegisterMap;
- (id)p_serviceHolder;
- (void).cxx_destruct;
- (void)unsubscribe:(id)a0;

@end
