@class MPVolumeView, NSMutableDictionary, NSString, NSObject, NSNumber, NSLock;
@protocol OS_dispatch_queue;

@interface AWESystemVolumnManager : NSObject {
    double _volumn;
}

@property (retain, nonatomic) MPVolumeView *volumeView;
@property (retain, nonatomic) NSMutableDictionary *volumeChangeDirectHandlers;
@property (retain, nonatomic) NSMutableDictionary *volumeChangeConvergentHandlers;
@property (retain, nonatomic) NSNumber *volumeBeforeLatestChange;
@property (retain, nonatomic) NSNumber *volumeAfterLatestChange;
@property (copy, nonatomic) NSString *latestAudioCategory;
@property (copy, nonatomic) NSString *latestChangeReason;
@property (retain, nonatomic) NSNumber *selfIncreasingID;
@property (retain, nonatomic) NSLock *increasingIDLock;
@property (retain, nonatomic) NSLock *dictOperationLock;
@property (nonatomic) BOOL isSystemVolumnCacheEnable;
@property (nonatomic) BOOL isAVAudioSessionAvailable;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *avAudioSessionQueue;
@property (nonatomic) double volumn;
@property (nonatomic) long long coldLaunchSystemVolumeAdjustStatus;

+ (BOOL)isAVAudioSessionAvailable;
+ (BOOL)enableColdLaunchAdjustSystemVolume;
+ (BOOL)enableColdLaunchAdjustSystemVolumeByUserState;
+ (BOOL)coldLaunchAdjustSystemVolumeUserState;
+ (BOOL)enableSmartColdLaunchAdjustVolume;
+ (double)coldLaunchSystemVolumeThreshold;
+ (BOOL)isEarphone;
+ (BOOL)shouldAdjustVolumeWhenColdLaunch;
+ (double)adjustVolumeDelayTime;
+ (double)clearVolumeViewDelayTime;
+ (id)volumeString;
+ (void)updateColdLaunchAdjustSystemVolumeUserState:(BOOL)a0;
+ (double)coldLaunchSystemVolumeAdjustTarget;
+ (BOOL)enableColdLaunchVolumeBuryPoint;
+ (void)setupAsyncBeginRemoteDefaultValue:(BOOL)a0;
+ (id)sharedManager;

- (id)registerVolumeChangeHandler:(id /* block */)a0 convergence:(BOOL)a1;
- (void)removeVolumeHandlerWithIndentifier:(id)a0;
- (id)volumnViewSlider;
- (id)p_createVolumeView;
- (void)clearVolumeView;
- (void)delayOrNowStartRemoteEvents;
- (void)delayHoldMPVolumeView;
- (void)onVolumeChangeNotification:(id)a0;
- (id)systemVolumeDidChangeNotification;
- (void)beginRemoteForSystemVolumeChange;
- (id)p_statusBarWindow;
- (void)pOnVolumeChangeNotification:(id)a0;
- (id)volumnNotificationParameter;
- (id)audioCategoryNotificationParameter;
- (id)changeReasonNotificationParameter;
- (void)onVolumeValueChangedBeforeReduceFrequency;
- (void)onVolumeValueChangedAfterReduceFrequency;
- (void)setVolumnWhenColdLaunch:(double)a0 completion:(id /* block */)a1;
- (void)dismissSystemVolumeView:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
