@class NSString, NSMapTable;
@protocol RxInjector;

@interface RTVQosMonitor : NSObject <RTVQosMonitorInterface> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (readonly, nonatomic) NSMapTable *nodeCache;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)nodeWithKey:(id)a0;
- (id)createCompaudNodeWithKey:(id)a0 makerBlock:(id /* block */)a1;
- (id)createNodeWithKey:(id)a0 initialData:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
