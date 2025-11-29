@class NSString, NSMutableDictionary, IESECTabKitDIContext, NSMutableArray;

@interface IESECTabKitComponentManager : NSObject <IESECTabKitComponentManager, IESECTabKitComponentLifeCycle> {
    IESECTabKitDIContext *_context;
    unsigned long long _lifeCycleState;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSMutableArray *_componentLoadArray;
    NSMutableDictionary *_componentClassMap;
    NSMutableDictionary *_componentMap;
    NSMutableDictionary *_componentTypeMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (id)componentArrayBySelector:(SEL)a0;
- (void)componentDidLoad;
- (void)componentWillAppear:(BOOL)a0;
- (void)componentWillDisappear:(BOOL)a0;
- (void)componentDidAppear:(BOOL)a0;
- (void)componentDidDisappear:(BOOL)a0;
- (void)loadComponents;
- (void)registerDefaultComponentClasses;
- (Class)componentClassForProtocol:(id)a0;
- (void)registerComponentClass:(Class)a0 forProtocol:(id)a1;
- (void)loadComponentForProtocol:(id)a0;
- (void)loadComponentForProtocol:(id)a0 forced:(BOOL)a1;
- (id)componentForProtocol:(id)a0;
- (void)syncComponentLifeCycle:(id)a0;
- (void)dispatchDidLoadComponent:(id)a0;
- (void).cxx_destruct;
- (id)componentForType:(unsigned long long)a0;

@end
