@class NSString, TIMXTrailingDebounce, TIMXTrailingThrottle, NSObject;
@protocol OS_dispatch_queue;

@interface TIMXThrottleDebounceThreshold : NSObject <IESIMThrottleDebounceAction, TIMXDebounceThresholdProtocol> {
    BOOL _p_fixThrottleQueue;
    id /* block */ _p_logBlock;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) double interval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) double interval;
@property (nonatomic) double maxThresholdInterval;
@property (nonatomic) BOOL hasDebounce;
@property (retain, nonatomic) TIMXTrailingThrottle *trailingThrottle;
@property (retain, nonatomic) TIMXTrailingDebounce *trailingDebounce;
@property (nonatomic) unsigned long long excuteCount;
@property (nonatomic) BOOL hasDestroy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)excute:(id /* block */)a0;
- (void)p_log:(id)a0;
- (id)initWithInterval:(double)a0 maxThresholdInterval:(double)a1 queue:(id)a2 ext:(id)a3;
- (void)_excuteWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)destroy;
- (void)dealloc;

@end
