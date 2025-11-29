@class NSArray, NSString;

@interface AWETeenSpeedPlayManager : NSObject

@property (readonly, copy, nonatomic) NSArray *playbackRateTypes;
@property (nonatomic) long long currentPlaybackRateType;
@property (retain, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL isAlbum;
@property (nonatomic) BOOL sendTrack;
@property (retain, nonatomic) NSString *currentVideoId;
@property (nonatomic) long long vcType;

+ (id)speedPlayManager;
+ (void)activateButtonWithPlaybackRateType:(long long)a0 buttons:(id)a1 normalColor:(id)a2 selectedColor:(id)a3;
+ (long long)indexOfButton:(id)a0 allButtons:(id)a1;
+ (id)titleFromPlaybackType:(long long)a0;

- (BOOL)isActiveBtn;
- (double)p_playbackRateFromPlaybackType:(long long)a0;
- (void)updatePlaybackRate:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (double)currentPlaybackRate;

@end
