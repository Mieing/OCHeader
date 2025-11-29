@class _TtC5Saber13TimingManager;

@interface Saber.TimingManager : NSObject {
    void /* unknown type, empty encoding */ enable;
    void /* unknown type, empty encoding */ timings;
    void /* unknown type, empty encoding */ timingBlackList;
    void /* unknown type, empty encoding */ channelTimings;
    void /* unknown type, empty encoding */ timingListeners;
    void /* unknown type, empty encoding */ timingLock;
    void /* unknown type, empty encoding */ listenerLock;
    void /* unknown type, empty encoding */ channelListenerQueue;
}

@property (class, nonatomic, readonly) _TtC5Saber13TimingManager *shared;

- (void)registerTiming:(id)a0;
- (void)triggerCustomTimingWithTimingID:(id)a0 context:(id)a1;
- (void)registerListenerFor:(id)a0 listener:(id /* block */)a1;
- (void).cxx_destruct;
- (void)launch;
- (id)init;

@end
