@class RTVQosMonitorDescription, NSString, NSMutableDictionary;
@protocol RxInjector;

@interface RTVQosMonitorV2 : NSObject <RTVQosMonitorV2Protocol> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RTVQosMonitorDescription *monitorDescription;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSMutableDictionary *nodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)__createNodes;
- (void)__parseNodeDependencies;
- (id)__nodeWithNodeDescription:(id)a0;
- (void)renderWithDescription:(id)a0 context:(id)a1;
- (id)nodeWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)allNodes;
- (void)dealloc;

@end
