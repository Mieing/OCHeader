@class NSString, NSDictionary, NSData, NSArray;

@interface FaceLiveModule : CIFilter {
    void *_handle;
    BOOL _is_released;
    struct FaceLiveInfo { int category; int category_status; int time_remaind; int status; int state_machine_stage; int detect_result_code; int action_number; int if_go_reflection_outs; int prompt_code; int prompt_info_wo_smooth; BOOL should_info_detect; BOOL should_begin_info_detect; BOOL should_end_info_detect; int info_frame_index; struct FaceLiveInfoDetectResult { BOOL is_detect; float infor_score; int infor_mode; float sub_mode; struct FaceLiveBestFrame { char *image; int image_width; int image_height; BOOL mask_flag; unsigned long long presentation_time; unsigned int sign; } best_image; struct FaceLiveBestFrame { char *image; int image_width; int image_height; BOOL mask_flag; unsigned long long presentation_time; unsigned int sign; } fixed_image; int best_image_index; int fixed_image_index; } info_detect_result; BOOL should_end_all_detect; BOOL is_best_frame; float face_box[4]; } _info_ret;
}

@property (retain, nonatomic) NSDictionary *reflectionParams;
@property (retain, nonatomic) NSDictionary *infoParams;
@property (nonatomic) BOOL shouldInfoDetect;
@property (nonatomic) BOOL didBeginInfoDetect;
@property (nonatomic) BOOL didEndInfoDetect;
@property (nonatomic) BOOL didEndAllDetect;
@property (nonatomic) BOOL enableByteGuard;
@property (retain, nonatomic) NSData *faceImageData;
@property (nonatomic) unsigned int faceImageSign;
@property (retain, nonatomic) NSData *faceWithEnvImageData;
@property (nonatomic) unsigned int envImageSign;
@property (retain, nonatomic) NSData *eyeImageData;
@property (retain, nonatomic) NSData *mouthImageData;
@property (retain, nonatomic) NSData *nodImageData;
@property (retain, nonatomic) NSData *shakeImageData;
@property (retain, nonatomic) NSData *livenessImageData;
@property (retain, nonatomic) NSData *verifyImageData;
@property (retain, nonatomic) NSData *verifyOriImageData;
@property (retain, nonatomic) NSString *logBuffer;
@property (nonatomic) BOOL maskFlag;
@property (nonatomic) struct FaceRiskLabel { int risk_multi; int risk_light; float risk_age_lower; float risk_age_upper; int risk_action; } riskLabel;
@property (nonatomic) int reflectColorNum;
@property (nonatomic) int currentColorIndex;
@property (copy, nonatomic) NSArray *colorDurations;
@property (copy, nonatomic) NSArray *reflectColors;
@property (copy, nonatomic) NSArray *reflectBestBase64Images;
@property (nonatomic) BOOL goReflection;
@property (nonatomic) BOOL startReflection;
@property (nonatomic) BOOL enableSDKSign;
@property (nonatomic) int algoErrorCode;
@property (nonatomic) BOOL allMotionExtremImage;

- (int)setRandom:(int)a0;
- (int)setParamsGeneral:(int)a0 value:(float)a1;
- (void)setMaskRadiusRatio:(float)a0 offsetToCenterRatio:(float)a1;
- (int)setParamsWithActions:(int *)a0 action_num:(int)a1 timeout:(int)a2;
- (int)setActionLivenessReflectionParams:(id)a0;
- (int)setActionLivenessInfoParams:(id)a0;
- (int)setSignParam;
- (int)currentReflectColor;
- (int)reStart;
- (struct CGImage { } *)doFaceLive:(struct __CVBuffer { } *)a0 orient:(int)a1 ret:(struct FaceLiveInfo { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; BOOL x10; BOOL x11; BOOL x12; int x13; struct FaceLiveInfoDetectResult { BOOL x0; float x1; int x2; float x3; struct FaceLiveBestFrame { char *x0; int x1; int x2; BOOL x3; unsigned long long x4; unsigned int x5; } x4; struct FaceLiveBestFrame { char *x0; int x1; int x2; BOOL x3; unsigned long long x4; unsigned int x5; } x5; int x6; int x7; } x14; BOOL x15; BOOL x16; float x17[4]; } *)a2;
- (int)doFaceQuality:(struct __CVBuffer { } *)a0 orient:(int)a1 ret:(struct FaceQualityInfo { unsigned int x0; int x1; } *)a2;
- (void)updateInfoDetectReturnWithRet:(struct FaceLiveInfo { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; BOOL x10; BOOL x11; BOOL x12; int x13; struct FaceLiveInfoDetectResult { BOOL x0; float x1; int x2; float x3; struct FaceLiveBestFrame { char *x0; int x1; int x2; BOOL x3; unsigned long long x4; unsigned int x5; } x4; struct FaceLiveBestFrame { char *x0; int x1; int x2; BOOL x3; unsigned long long x4; unsigned int x5; } x5; int x6; int x7; } x14; BOOL x15; BOOL x16; float x17[4]; } *)a0 output:(struct ActionLivenessRet { int x0; int x1; int x2; int x3; int x4; int x5; float x6; float x7; float x8; int x9; int x10; BOOL x11; BOOL x12; float x13; int x14; struct QualityInfo { int x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; int x13; int x14; float x15[4]; } x15; BOOL x16; BOOL x17; })a1;
- (void)saveBestImag;
- (void)saveErrorLog;
- (id)faceDetectQualityLog;
- (id)faceDetectThreshInfo;
- (id)eyeCloseDuration;
- (unsigned int)getActionCode:(int *)a0 num:(int)a1;
- (id)hashSignForFramesHash:(id)a0;
- (id)frameHash:(struct __CVBuffer { } *)a0;
- (id)convertQualityInfoVectorToNSArray:(const void *)a0;
- (void)livenessStageState:(void *)a0;
- (int)faceMissCount;
- (void)saveExtremImage;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)initData;

@end
