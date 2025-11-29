@class NSMutableArray;

@interface IESECMallEventItem : NSObject

@property (retain, nonatomic) NSMutableArray *eventHandlers;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutexLock;

- (void)removeAllEventHandlers;
- (void)notifyEvent:(id)a0 withValue:(id)a1;
- (void)releaseEventHandlers;
- (void).cxx_destruct;
- (void)removeEventHandler:(id)a0;
- (id)init;
- (void)addEventHandler:(id)a0;
- (void)dealloc;

@end
