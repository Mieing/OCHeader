@class NSString, RxMultipleDelegate;
@protocol RxInjector, RTVStateMachineDelegate, RTVStateProtocol;

@interface RTVStateMachine : NSObject <RTVStateMachineInterface> {
    struct RecursiveMutex { int _type; union { struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _plain; struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _recursive; } ; } _lock;
}

@property (retain) id<RTVStateProtocol> currentState;
@property (readonly, nonatomic) RxMultipleDelegate<RTVStateMachineDelegate> *observers;
@property (copy, nonatomic) id /* block */ loggerBlock;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)resetCurrentState;
- (id)reactEvent:(id)a0;
- (id)reactEvent:(id)a0 context:(id)a1;
- (BOOL)removeStateChangeObserver:(id)a0;
- (void)__logStateChange:(id)a0;
- (BOOL)addStateChangeObserver:(id)a0 synchronize:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (BOOL)addStateChangeObserver:(id)a0;

@end
