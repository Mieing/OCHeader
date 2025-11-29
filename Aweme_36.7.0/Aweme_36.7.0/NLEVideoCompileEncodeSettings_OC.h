@class NLEVideoHWEncodeSettings_OC, NLEVideoSWEncodeSettings_OC;

@interface NLEVideoCompileEncodeSettings_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::media::NLEVideoCompileEncodeSettings> { struct NLEVideoCompileEncodeSettings *__ptr_; struct __shared_weak_count *__cntrl_; } cppVideoCompileEncodeSettings;
@property (nonatomic) BOOL useHWEncoder;
@property (nonatomic) BOOL enableHwBufferEncode;
@property (nonatomic) BOOL isSupportHWEncoder;
@property (retain, nonatomic) NLEVideoHWEncodeSettings_OC *mHWEncodeSetting;
@property (retain, nonatomic) NLEVideoSWEncodeSettings_OC *mSWEncodeSetting;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
