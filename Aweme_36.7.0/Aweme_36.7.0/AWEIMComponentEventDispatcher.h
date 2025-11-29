@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEIMComponentEventDispatcher : NSObject {
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (retain, nonatomic) NSMutableDictionary *observersMap;

- (id)actionPublisher:(id)a0;
- (void)observeAction:(id)a0 withComponent:(id)a1;
- (void)unobserveAction:(id)a0 withComponent:(id)a1;
- (void)p_observeAction:(id)a0 withComponent:(id)a1;
- (void)p_unobserveAction:(id)a0 withComponent:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
