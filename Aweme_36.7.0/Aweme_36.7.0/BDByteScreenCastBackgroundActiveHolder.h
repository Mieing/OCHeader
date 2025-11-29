@class NSTimer, BDByteScreenCastContext, UIApplication, AVPlayer;

@interface BDByteScreenCastBackgroundActiveHolder : NSObject

@property (retain, nonatomic) UIApplication *app;
@property (nonatomic) unsigned long long bgTask;
@property (retain, nonatomic) NSTimer *audioTimer;
@property (retain, nonatomic) AVPlayer *player;
@property (weak, nonatomic) BDByteScreenCastContext *byteScreenCastContext;
@property (retain, nonatomic) NSTimer *autoCloseTimer;
@property (copy, nonatomic) id /* block */ autoReleaseActiveBlock;

- (void)addNotifications;
- (void)p_setupMedia;
- (void)endActiveHoldTask;
- (void)beginActiveHoldTask;
- (void)applyForMoreTime:(id)a0;
- (id)initWithScreenCastContext:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)applicationDidEnterBackgroundNotification:(id)a0;
- (void)applicationWillEnterForegroundNotification:(id)a0;

@end
