@class NSString, IESECSliceXTimer, NSHashTable;

@interface IESECSliceXTimeCenter : NSObject <IESECSliceXTimerListener>

@property (nonatomic) unsigned long long initialTimestamp;
@property (nonatomic) unsigned long long initialCurrentAbsoluteTimestamp;
@property (retain, nonatomic) IESECSliceXTimer *timer;
@property (nonatomic) unsigned long long currentTimestamp;
@property (retain, nonatomic) NSHashTable *timerListeners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)init_private;
- (void)addTimerListener:(id)a0;
- (void)removeTimerListener:(id)a0;
- (void)timeIsUp:(double)a0;
- (void)notifyTimerListeners;
- (void).cxx_destruct;

@end
