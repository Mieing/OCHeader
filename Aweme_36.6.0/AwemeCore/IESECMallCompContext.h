@class NSArray, NSMutableDictionary, NSString, NSMutableArray, IESECMallContextEventCenter;
@protocol IESECMallBusinessContextProtocol;

@interface IESECMallCompContext : NSObject <IESECMallContextProtocol, IESECMallCompLifeCycle, IESECMallCompListLifeCycle>

@property (retain, nonatomic) NSMutableDictionary *componentsMap;
@property (retain, nonatomic) NSMutableArray *componentsArray;
@property (retain, nonatomic) NSArray *loadArray;
@property (retain, nonatomic) NSMutableDictionary *invokeCacheMap;
@property (retain, nonatomic) IESECMallContextEventCenter *eventCenter;
@property (weak, nonatomic) id<IESECMallBusinessContextProtocol> bizContext;
@property (nonatomic) BOOL isLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addNotifications;
- (id)componentArrayBySelector:(SEL)a0;
- (void)registerCompCls:(Class)a0 protocol:(id)a1 description:(id)a2;
- (void)addComponent:(id)a0 protocol:(id)a1 description:(id)a2;
- (void)dispatchSelector:(SEL)a0;
- (id)subscribeEvent:(id)a0 withSubscriber:(id)a1 handler:(id /* block */)a2;
- (id)subscribeEvents:(id)a0 withSubscriber:(id)a1 handler:(id /* block */)a2;
- (void)removeHandlersForSubscriber:(id)a0;
- (void)removeAllEventHandlers;
- (void)publishEvent:(id)a0 withValue:(id)a1;
- (void)publishEvent:(id)a0 paramsBuilder:(id /* block */)a1;
- (BOOL)hasService:(id)a0;
- (id)serviceByProtocol:(id)a0;
- (void)loadCompsWithMainVC:(id)a0;
- (void).cxx_destruct;
- (void)removeEventHandler:(id)a0;
- (void)dealloc;
- (void)removeComponent:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive;
- (void)removeAllComponents;
- (void)appWillResignActive;

@end
