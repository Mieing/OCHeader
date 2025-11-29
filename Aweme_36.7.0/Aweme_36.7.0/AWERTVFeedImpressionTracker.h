@protocol RxInjector, RTVPerformanceMonitorInterface;

@interface AWERTVFeedImpressionTracker : NSObject

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVPerformanceMonitorInterface> performaceMonitor;

- (void)rxAwakeFromPropertyInjection;
- (void)endLiveStreamPlayWithAwemeID:(id)a0;
- (void)startLiveStreamPlayWithAwemeModel:(id)a0 roomID:(id)a1 isAnswer:(BOOL)a2 isHost:(BOOL)a3;
- (void)trackAvatarLiveEntryShowWithAwemeModel:(id)a0 roomID:(id)a1 isAnswer:(BOOL)a2 isHost:(BOOL)a3;
- (void)__trackeEvent:(id)a0 params:(id)a1;
- (id)__awemePlayMarkerWithAwemeID:(id)a0;
- (void).cxx_destruct;

@end
