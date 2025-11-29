@class NSString, NSMapTable, IESLiveGCDTimer;

@interface IESLiveAnchorWatchTime : NSObject <IESLiveRoomWatchTimeService>

@property (retain, nonatomic) NSMapTable *observers;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) long long minitTickTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)doTimerAction;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)stopWatching;
- (void)removeObserver:(id)a0;
- (void)startWatching;
- (void)startTimerWithInterval:(double)a0;

@end
