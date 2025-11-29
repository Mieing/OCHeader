@class NLEAudioSWEncodeSettings_OC, NLEAudioHWEncodeSettings_OC;

@interface NLEAudioCompileEncodeSettings_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::media::NLEAudioCompileEncodeSettings> { struct NLEAudioCompileEncodeSettings *__ptr_; struct __shared_weak_count *__cntrl_; } cppAudioCompileEncodeSettings;
@property (nonatomic) BOOL useHWEncoder;
@property (nonatomic) BOOL enableHwBufferEncode;
@property (nonatomic) BOOL isSupportHWEncoder;
@property (retain, nonatomic) NLEAudioHWEncodeSettings_OC *mHWEncodeSetting;
@property (retain, nonatomic) NLEAudioSWEncodeSettings_OC *mSWEncodeSetting;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
