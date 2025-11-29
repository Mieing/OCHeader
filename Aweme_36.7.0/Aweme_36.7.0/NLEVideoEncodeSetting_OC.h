@class NSString, NLEVideoCompileEncodeSettings_OC, NLEAudioCompileEncodeSettings_OC, NSArray, NLEWatermarkParam_OC;

@interface NLEVideoEncodeSetting_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::media::NLEVideoEncodeSettings> { struct NLEVideoEncodeSettings *__ptr_; struct __shared_weak_count *__cntrl_; } cppEncodeSettings;
@property (nonatomic) unsigned long long compileType;
@property (nonatomic) long long sourceType;
@property (nonatomic) long long rotate;
@property (nonatomic) long long resizeMode;
@property (nonatomic) double resizeX;
@property (nonatomic) double resizeY;
@property (nonatomic) double speed;
@property (nonatomic) struct CGSize { double x0; double x1; } outputSize;
@property (nonatomic) struct CGSize { double x0; double x1; } watermarkSize;
@property (retain, nonatomic) NSString *externalSettingsJsonStr;
@property (nonatomic) long long bitrateMode;
@property (nonatomic) long long bps;
@property (nonatomic) long long swCRF;
@property (nonatomic) double swQPOffset;
@property (nonatomic) long long swQP;
@property (nonatomic) long long fps;
@property (nonatomic) long long gopSize;
@property (nonatomic) long long swPreset;
@property (nonatomic) long long encodeStandard;
@property (nonatomic) long long encodeProfile;
@property (nonatomic) long long swMaxrate;
@property (nonatomic) BOOL isSupportHWEncoder;
@property (nonatomic) BOOL enableHwBufferEncode;
@property (nonatomic) BOOL enableByteVCRemuxVideo;
@property (nonatomic) BOOL enableRemuxVideo;
@property (nonatomic) BOOL enableRemuxVideoForRotation;
@property (nonatomic) BOOL enableRemuxVideoForShoot;
@property (nonatomic) BOOL enableRemuxVideoRes;
@property (nonatomic) BOOL enableInterLeave;
@property (retain, nonatomic) NLEWatermarkParam_OC *mWatermarkParam;
@property (retain, nonatomic) NLEVideoCompileEncodeSettings_OC *mVideoWatermarkCompileEncodeSetting;
@property (retain, nonatomic) NLEVideoCompileEncodeSettings_OC *mVideoCompileEncodeSetting;
@property (retain, nonatomic) NLEAudioCompileEncodeSettings_OC *mAudioCompileEncodeSetting;
@property (nonatomic) BOOL mOptRemuxWithCopy;
@property (retain, nonatomic) NSString *mDescription;
@property (retain, nonatomic) NSString *mComment;
@property (nonatomic) BOOL mCompileSoftInfo;
@property (nonatomic) BOOL mRecordingMp4;
@property (nonatomic) BOOL mTransitionKeyframeEnable;
@property (nonatomic) BOOL mReEncodeOpt;
@property (nonatomic) BOOL mResolutionAlign;
@property (retain, nonatomic) NSArray *mKeyFramePoints;
@property (nonatomic) BOOL mAutoModifyResolution;
@property (retain, nonatomic) NSString *bitrateSettings;
@property (nonatomic) BOOL enableUploadingWhileCompile;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) long long startOffset;
@property (nonatomic) BOOL isAudioOnly;
@property (nonatomic) BOOL enableAvInterleave;
@property (nonatomic) long long colorSpace;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
