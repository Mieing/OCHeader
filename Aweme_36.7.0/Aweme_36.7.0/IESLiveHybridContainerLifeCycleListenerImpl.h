@class NSString, NSHashTable;

@interface IESLiveHybridContainerLifeCycleListenerImpl : NSObject <IESLiveHybridContainerLifeCycleListener>

@property (retain, nonatomic) NSHashTable *subListeners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)kitView:(id)a0 willCreatedWithContext:(id)a1;
- (void)registerNewListener:(id)a0;
- (void)kitViewWillDealloc:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
