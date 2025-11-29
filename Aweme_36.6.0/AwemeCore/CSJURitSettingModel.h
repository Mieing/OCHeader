@class NSString;

@interface CSJURitSettingModel : NSObject

@property (nonatomic) double splashSkipTime;
@property (nonatomic) double splashImageCountdownTime;
@property (copy, nonatomic) NSString *codeId;
@property (nonatomic) long long videoAutoPlayType;
@property (nonatomic) BOOL muteSwitch;
@property (nonatomic) long long videoPrefetchType;
@property (nonatomic) long long rewardVideoPrefetchType;
@property (nonatomic) long long drawVideoAutoPlayType;
@property (nonatomic) BOOL drawMuteSwitch;
@property (nonatomic) BOOL skipTimeEnable;
@property (nonatomic) long long skipResult;
@property (nonatomic) long long rewardbarShowTime;
@property (nonatomic) long long rewardedSkipTime;
@property (nonatomic) long long voiceControl;
@property (nonatomic) long long showAlert;
@property (nonatomic) BOOL interstitialMuteSwitch;
@property (nonatomic) long long fullscreen_skipBtnShowTime;
@property (nonatomic) long long splash_prefetchType;
@property (nonatomic) long long splash_stopTime;
@property (nonatomic) long long rewardAdSendRewardType;
@property (nonatomic) double timeOutControl;
@property (nonatomic) long long slotType;
@property (nonatomic) long long splashLoadType;
@property (nonatomic) long long splashBufferTime;
@property (nonatomic) long long time_out_contorl_type;
@property (nonatomic) BOOL autoCloseOnClick;
@property (nonatomic) long long nativePlayableDelay;
@property (nonatomic) BOOL enable_bidding_pre_fetch;
@property (nonatomic) BOOL enable_bidding_cache;
@property (nonatomic) long long bidding_cache_skip_time;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
