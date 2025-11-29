@interface NLEVideoHWEncodeSettings_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::media::NLEVideoHWEncodeSettings> { struct NLEVideoHWEncodeSettings *__ptr_; struct __shared_weak_count *__cntrl_; } cppVideoHWEncodeSettings;
@property (nonatomic) long long mBitrate;
@property (nonatomic) long long mProfile;
@property (nonatomic) double mHp_bitrate_ratio;
@property (nonatomic) double mFullHd_bitrate_ratio;
@property (nonatomic) double mSd_bitrate_ratio;
@property (nonatomic) double mH_fps_bitrate_ratio;
@property (nonatomic) double transition_bitrate_ratio;
@property (nonatomic) double m2K_bitrate_ratio;
@property (nonatomic) double m4K_bitrate_ratio;
@property (nonatomic) long long mGop;
@property (nonatomic) long long mCodecType;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
