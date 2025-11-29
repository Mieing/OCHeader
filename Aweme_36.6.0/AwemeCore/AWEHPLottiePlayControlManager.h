@class MMKV, NSMutableDictionary, NSDictionary, AWEHPHambListener, NSTimer;

@interface AWEHPLottiePlayControlManager : NSObject

@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) NSMutableDictionary *lottiePlayLogs;
@property (retain, nonatomic) AWEHPHambListener *listener;
@property (retain, nonatomic) NSDictionary *controlDict;
@property (retain, nonatomic) NSTimer *timer;

+ (id)sharedInstance;

- (BOOL)isLottieDynamicEffectCanShowWithLottieID:(id)a0;
- (void)logDynamicEffectShowWithLottieID:(id)a0;
- (void)clearOfflineLottiePlayLogIfNeed;
- (long long)retryDelayTime;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
