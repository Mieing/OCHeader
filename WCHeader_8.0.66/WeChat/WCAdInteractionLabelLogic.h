@class MMTimer, UIView;
@protocol WCAdInteractionLabelLogicDelegate;

@interface WCAdInteractionLabelLogic : WCAdvertiseOperationLogicBase

@property (nonatomic) unsigned long long switchCount;
@property (retain, nonatomic) MMTimer *logicTimer;
@property (nonatomic) unsigned long long currentTick;
@property (weak, nonatomic) id<WCAdInteractionLabelLogicDelegate> delegate;
@property (nonatomic) unsigned long long itemCount;
@property (retain, nonatomic) UIView *iconViewCache;

- (id)init;
- (void)dealloc;
- (void)addNotifications;
- (void)onDidEnterBackground;
- (void)onWillEnterForeground;
- (void)touch;
- (void)start;
- (void)stop;
- (void)startTimer;
- (void)stopTimer;
- (void)touchWithAnimated:(BOOL)a0;
- (void)scheduleSwitchLabel;
- (BOOL)shouldFireTouchEvent;
- (void)tryToSetIconPlaying:(BOOL)a0;
- (void)resetIcon;
- (void)setIconPlaying:(BOOL)a0 reset:(BOOL)a1;
- (void).cxx_destruct;

@end
