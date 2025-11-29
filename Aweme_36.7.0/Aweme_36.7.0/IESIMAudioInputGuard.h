@class NSObject;
@protocol OS_dispatch_queue;

@interface IESIMAudioInputGuard : NSObject

@property (weak, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)ensureHasInputIfNeeded;
- (void)handleRouteChangedNotification:(id)a0;
- (void)p_fallbackToBuiltinMic;
- (void)p_dispatchToQueueIfNeeded:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
