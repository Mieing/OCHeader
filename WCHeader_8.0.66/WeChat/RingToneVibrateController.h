@class NSString;
@protocol RingToneVibrateDataSource;

@interface RingToneVibrateController : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isVibrating;
@property (weak, nonatomic) id<RingToneVibrateDataSource> dataSource;
@property (nonatomic) BOOL storageFilelongTermIfNeed;
@property (copy, nonatomic) id /* block */ onVibrate;

+ (BOOL)VibrateEnabled;
+ (BOOL)SupportCustomizedVibrate;
+ (BOOL)CustomizedVibrateEnabled;
+ (BOOL)CustomizedVibrateEnabledWhileAuditioning;
+ (BOOL)CustomizedVibrateEnabledWhileAPPBackground;
+ (void)ClassicsRepeatVibration;

- (void)executeInHapticQueueWithBlock:(id /* block */)a0;
- (void)checkAndPlayVibrateFile:(id)a0;
- (void)replay;
- (void)stop;
- (void)tryVibrateWithRingID:(id)a0;
- (double)getVibrateProgressWithStartPlayTime:(unsigned long long)a0;
- (void)applicationWillBecomeActive;
- (void)applicationEnterBackground;
- (void).cxx_destruct;

@end
