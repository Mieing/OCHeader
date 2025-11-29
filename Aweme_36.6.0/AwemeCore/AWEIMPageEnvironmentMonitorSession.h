@class NSTimer, NSString, NSMutableDictionary;

@interface AWEIMPageEnvironmentMonitorSession : NSObject {
    NSMutableDictionary *p_extDict;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } p_extDictMutex;
}

@property (retain) NSTimer *timer;
@property (nonatomic) double sessionStartTime;
@property (copy, nonatomic) NSString *trackerEventName;
@property (copy, nonatomic) id /* block */ sampleRateInfoFetchBlock;
@property (copy, nonatomic) id /* block */ environmentFetchBlock;

- (void)p_timerFired:(id)a0;
- (void)setSessionExtValue:(id)a0 forKey:(id)a1;
- (void)p_trackWithFireType:(long long)a0;
- (id)p_addTimer;
- (void)p_removeTimer;
- (id)sessionExtValueforKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (id).cxx_construct;
- (void)start;
- (void)dealloc;

@end
