@class NSArray;
@protocol BDXContainerLifecycleProtocol;

@interface BDPBulletPluginModel : NSObject

@property (retain, nonatomic) NSArray *eventArray;
@property (nonatomic) BOOL disableUnsubscribeAllEventWhenDealloc;
@property (weak, nonatomic) id<BDXContainerLifecycleProtocol> bulletLifeCycleDelegate;
@property (copy, nonatomic) id /* block */ didDestroyContainerCallback;

- (id)getEventModelWithName:(id)a0;
- (void).cxx_destruct;

@end
