@class NSString, NSTimer, UIScreen;

@interface AWEVideoPlayerScreenBrightnessManager : NSObject {
    NSTimer *_timer;
    UIScreen *_mainScreen;
    double _brightnessDeltaPerStep;
    double _fromValue;
    double _toValue;
    long long _steps;
    int _numberOfTicks;
}

@property (nonatomic) BOOL enableBrightnessAdjust;
@property (nonatomic) double originBrightness;
@property (nonatomic) double targetBrightness;
@property (nonatomic) double durationPer10Par;
@property (nonatomic) BOOL isAdjusting;
@property (nonatomic) BOOL isHDRVideo;
@property (retain, nonatomic) NSString *videoItemID;

+ (BOOL)enableVPDirectScreen;
+ (BOOL)enableVPBnFirstFrame;
+ (id)vpBrightnessConfigWithAds:(BOOL)a0;
+ (id)bmfBrightnessConfigWithAds:(BOOL)a0 videoBrightnessMean:(double)a1 tag:(id)a2;
+ (id)vpBnBalanceScaleFactorWith:(BOOL)a0;
+ (id)bmfBrightnessConfigWithAds:(BOOL)a0;
+ (BOOL)enableAdsVPBn;
+ (id)sharedManager;

- (void)adjustScreenBrightnessToTargetBrightness;
- (void)restoreOriginalBrightness;
- (void)p_watchForUserScreenBrightnessChange:(id)a0;
- (void)p_watchForAppWillResign:(id)a0;
- (void)p_adjustScreenBrightnessFrom:(double)a0 to:(double)a1;
- (void)invalidateCurrentTimer;
- (void)p_transitionBrightness;
- (void).cxx_destruct;
- (id)init;

@end
