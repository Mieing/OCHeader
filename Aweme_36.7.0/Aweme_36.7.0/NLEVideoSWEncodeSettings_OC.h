@interface NLEVideoSWEncodeSettings_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::media::NLEVideoSWEncodeSettings> { struct NLEVideoSWEncodeSettings *__ptr_; struct __shared_weak_count *__cntrl_; } cppVideoSWEncodeSettings;
@property (nonatomic) long long mCrf;
@property (nonatomic) double mQPOffset;
@property (nonatomic) long long mBps;
@property (nonatomic) long long mBitrateMode;
@property (nonatomic) long long mPreset;
@property (nonatomic) long long mProfile;
@property (nonatomic) long long mMaxRate;
@property (nonatomic) long long mGop;

- (long long)isMPreset;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
