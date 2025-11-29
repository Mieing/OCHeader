@class NSString, NSMutableDictionary, NSMapTable;

@interface IESECMallContextEventCenter : NSObject <IESECMallEventCenterProtocol>

@property (retain, nonatomic) NSMutableDictionary *eventsMap;
@property (retain, nonatomic) NSMapTable *subscribersMap;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutexLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)subscribeEvent:(id)a0 withSubscriber:(id)a1 handler:(id /* block */)a2;
- (id)subscribeEvents:(id)a0 withSubscriber:(id)a1 handler:(id /* block */)a2;
- (void)removeHandlersForSubscriber:(id)a0;
- (void)removeAllEventHandlers;
- (void)publishEvent:(id)a0 withValue:(id)a1;
- (void)publishEvent:(id)a0 paramsBuilder:(id /* block */)a1;
- (void)recordSubscriber:(id)a0 withHandler:(id)a1;
- (void).cxx_destruct;
- (void)removeEventHandler:(id)a0;
- (id)init;
- (void)removeHandler:(id)a0;
- (void)dealloc;

@end
