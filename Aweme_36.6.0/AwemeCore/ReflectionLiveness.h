@class NSData, NSString;

@interface ReflectionLiveness : CIFilter {
    void *_handle;
    BOOL _is_released;
    BOOL _is_image_saved;
    struct ReflectionLiveInfo { int category; int time_remaind; int status; int state_machine_stage; int detect_result_code; int light; float process; } _info_ret;
}

@property (retain, nonatomic) NSData *faceImageData;
@property (retain, nonatomic) NSData *faceWithEnvImageData;
@property (retain, nonatomic) NSString *log;
@property (nonatomic) int algoErrorCode;

- (int)setParamsGeneral:(int)a0 value:(float)a1;
- (void)setMaskRadiusRatio:(float)a0 offsetToCenterRatio:(float)a1;
- (int)reStart:(int)a0;
- (struct CGImage { } *)doFaceLive:(struct __CVBuffer { } *)a0 orient:(int)a1 ret:(struct ReflectionLiveInfo { int x0; int x1; int x2; int x3; int x4; int x5; float x6; } *)a2;
- (int)saveInfo;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
