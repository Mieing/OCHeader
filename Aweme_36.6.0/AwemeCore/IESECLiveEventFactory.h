@class NSString, IESECLiveContext, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IESECLiveEventFactory : NSObject <IESECLiveEventFactoryFunctionService> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _eventPluginLock;
    NSMutableArray *_eventPlugins;
    NSObject<OS_dispatch_queue> *_notifyQueue;
}

@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveContext:(id)a0;
- (void)loadAllPlugins;
- (id)businessPlugins;
- (void)p_registerPlugin:(id)a0;
- (void)p_dispatchEvent:(id)a0;
- (void)p_realDispatchEvent:(id)a0 plugin:(id)a1;
- (void)dispatchEvent:(id)a0;
- (void).cxx_destruct;
- (void)dispatchEventWithName:(id)a0;
- (void)registerPlugin:(id)a0;
- (void)unregisterPlugin:(id)a0;
- (void)destroyAllPlugins;

@end
