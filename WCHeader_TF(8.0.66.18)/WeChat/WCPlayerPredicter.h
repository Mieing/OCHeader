@class WCPlayerPlayArgs, MMTimer, WCPlayerPlaybackInfo, NSString, WCPlayerReporter, NSObject, NSMutableArray;
@protocol WCPlayerPredicterDelegate, WCPlayerMediaExt;

@interface WCPlayerPredicter : NSObject

@property (retain, nonatomic) MMTimer *timer;
@property (nonatomic) unsigned int startSwitchTime;
@property (nonatomic) unsigned int lastSwitchTime;
@property (nonatomic) BOOL bDataSourceSwitching;
@property (retain, nonatomic) WCPlayerPlayArgs *playerArgs;
@property (retain, nonatomic) WCPlayerPlaybackInfo *playbackInfo;
@property (retain, nonatomic) NSObject<WCPlayerMediaExt> *mediaWrap;
@property (retain, nonatomic) NSMutableArray *arrDataSource;
@property (retain, nonatomic) NSString *allBitrateInKB;
@property (weak, nonatomic) id<WCPlayerPredicterDelegate> delegate;
@property (retain, nonatomic) WCPlayerReporter *reporter;

- (id)initWithPlayArgs:(id)a0 playbackInfo:(id)a1;
- (void)startTimer;
- (void)stopTimer;
- (void)onTimerCallback;
- (void)checkIfSwitchToLowerWithSpeed:(int)a0 bitrate:(float)a1;
- (void)checkIfSwitchToHigherWithSpeed:(int)a0 bitrate:(float)a1;
- (void)switchDataSourceWithMediaWrap:(id)a0 switchType:(long long)a1;
- (unsigned int)getCurrentLagCount;
- (id)getLowerWithSpeed:(int)a0;
- (id)getHigherWithSpeed:(int)a0;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onSwitchSuccessWithMediaWrap:(id)a0;
- (int)getCurrentSpeed;
- (void).cxx_destruct;

@end
