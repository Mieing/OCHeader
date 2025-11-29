@class MMTimer;
@protocol WCAdSellingPointLogicDelegate;

@interface WCAdSellingPointLogic : WCAdvertiseOperationLogicBase

@property (nonatomic) unsigned long long switchCount;
@property (retain, nonatomic) MMTimer *logicTimer;
@property (nonatomic) unsigned long long currentTick;
@property (weak, nonatomic) id<WCAdSellingPointLogicDelegate> delegate;
@property (nonatomic) unsigned long long itemCount;

- (id)init;
- (void)dealloc;
- (void)addNotifications;
- (void)onDidEnterBackground;
- (void)onWillEnterForeground;
- (void)touch;
- (void)start;
- (void)stop;
- (void)reset;
- (id)fetchSwitchCountToReport;
- (void)touchWithAnimated:(BOOL)a0;
- (void)scheduleSwitchSellingPoint;
- (BOOL)shouldFireTouchEvent;
- (void).cxx_destruct;

@end
