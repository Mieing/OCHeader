@class NSString, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface TIMXThrottleDebounce : NSObject <IESIMThrottleDebounceAction, TIMXThrottleDebounceProtocol> {
    BOOL _p_fixThrottleQueue;
    id /* block */ _p_logBlock;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) double interval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double interval;
@property (retain) NSDate *enableExcuteDate;
@property (retain) NSDate *lastExcuteDate;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL hasDestroy;
@property (copy) id /* block */ cancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)excute:(id /* block */)a0;
- (void)p_log:(id)a0;
- (id)initWithInterval:(double)a0 queue:(id)a1 ext:(id)a2;
- (void)_excuteWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)destroy;
- (void)restart;
- (void)dealloc;

@end
