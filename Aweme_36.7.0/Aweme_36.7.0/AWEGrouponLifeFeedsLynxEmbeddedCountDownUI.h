@class NSPointerArray, NSTimer, UIView;

@interface AWEGrouponLifeFeedsLynxEmbeddedCountDownUI : LynxUI

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSPointerArray *itemsArr;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double endTime;
@property (nonatomic) long long unit;
@property (nonatomic) long long interval;

+ (id)__lynx_prop_config__1460;
+ (id)__lynx_prop_config__1541;
+ (id)__lynx_prop_config__1652;

- (void)onNodeReady;
- (void)didAddSubComponent:(id)a0;
- (void)setText:(id)a0 requestReset:(BOOL)a1;
- (void)sendCountDownEnd;
- (void)setEndTime:(id)a0 requestReset:(BOOL)a1;
- (void)setUnit:(id)a0 requestReset:(BOOL)a1;
- (void)setInterval:(long long)a0 requestReset:(BOOL)a1;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)startTimer;
- (id)init;
- (void)dealloc;
- (id)createView;
- (void)tick;

@end
