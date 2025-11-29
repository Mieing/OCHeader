@class MMKV;

@interface BDSCAirPlayObserver : NSObject

@property (nonatomic) BOOL isAirPlayConnected;
@property (nonatomic) BOOL isAirPlayMirroring;
@property (nonatomic) double airPlayMirroringStartTime;
@property (retain, nonatomic) MMKV *mmkv;

+ (BOOL)isABTestEnabled;
+ (id)sharedInstance;

- (void)trackAirPlayMirroring:(BOOL)a0 duration:(long long)a1;
- (long long)airPlayMirroringDuration;
- (void)updateStates:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)applicationWillTerminate:(id)a0;

@end
