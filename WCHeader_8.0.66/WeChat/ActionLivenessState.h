@class YTVideoRecorder, NSArray, NSString, NSDictionary;

@interface ActionLivenessState : BaseState {
    struct shared_ptr<youtu::YTFaceCheckLivePose> { struct YTFaceCheckLivePose *__ptr_; struct __shared_weak_count *__cntrl_; } faceCheckLivePose;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } bestImgShape;
    struct Mat { int flags; int dims; int rows; int cols; char *data; int *refcount; char *datastart; char *dataend; char *datalimit; struct MatAllocator *allocator; struct MSize { int *p; } size; struct MStep { unsigned long long *p; unsigned long long buf[2]; } step; } eyeImg;
    struct Mat { int flags; int dims; int rows; int cols; char *data; int *refcount; char *datastart; char *dataend; char *datalimit; struct MatAllocator *allocator; struct MSize { int *p; } size; struct MStep { unsigned long long *p; unsigned long long buf[2]; } step; } mouthImg;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } eyeShape;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } mouthShape;
    struct vector<tiny_cv::Mat, std::allocator<tiny_cv::Mat>> { struct Mat *__begin_; struct Mat *__end_; struct __compressed_pair<tiny_cv::Mat *, std::allocator<tiny_cv::Mat>> { struct Mat *__value_; } __end_cap_; } currentFrameList;
    struct Mat { int flags; int dims; int rows; int cols; char *data; int *refcount; char *datastart; char *dataend; char *datalimit; struct MatAllocator *allocator; struct MSize { int *p; } size; struct MStep { unsigned long long *p; unsigned long long buf[2]; } step; } currentBestFrame;
    YTVideoRecorder *videoRecorder;
    NSString *videoPath;
    NSString *extraTips;
    BOOL currentActionDoneAndWaitRecordFlag;
    BOOL needLocalConfig;
    BOOL isRecordFinished;
    int codecSettingBitRate;
    int codecSettingiFrameInterval;
    int stableFrameCount;
    int innerWaitFrameCount;
    BOOL isManual;
    int poseType;
    NSString *controlConfig;
    int actReflectMode;
    NSDictionary *innerConfig;
    void *trackInfo;
    NSString *anchorWidths;
    float secondaryYawThreshold;
    float secondaryPitchThreshold;
    float secondaryRollThreshold;
    float secondaryCloseMouthThreshold;
    BOOL needActionBestImageRigorous;
    float smallThreshold;
    float bigThreshold;
}

@property (retain, nonatomic) NSArray *actArray;
@property (nonatomic) unsigned long long actIndex;
@property (nonatomic) int actCurrent;
@property (nonatomic) int continuousPassCount;
@property (nonatomic) BOOL needReflect;
@property (nonatomic) BOOL canTransitToReflect;
@property (nonatomic) struct YTPOSE { float x0; float x1; float x2; } *facePose;
@property (nonatomic) BOOL ActionFinished;

- (struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })convertMat:(void *)a0;
- (struct vector<tiny_cv::Mat, std::allocator<tiny_cv::Mat>> { struct Mat *x0; struct Mat *x1; struct __compressed_pair<tiny_cv::Mat *, std::allocator<tiny_cv::Mat>> { struct Mat *x0; } x2; })convertMatList:(void *)a0;
- (void)addFaceShapePoint:(struct vector<tiny_cv::Point_<float>, std::allocator<tiny_cv::Point_<float>>> { void *x0; void *x1; struct __compressed_pair<tiny_cv::Point_<float> *, std::allocator<tiny_cv::Point_<float>>> { void *x0; } x2; })a0 withFacePoints:(void *)a1;
- (struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })covnertFaceShape:(void *)a0;
- (void)loadWithName:(id)a0 withSDKConfigData:(id)a1;
- (void)unload;
- (void)enter;
- (void)reset;
- (void)update:(struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })a0 withTimeStamp:(unsigned long long)a1;
- (int)handleActionFinished:(long long)a0;
- (int)poseDetect:(struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })a0 visVec:(struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })a1 poseType:(int)a2 matRgb:(struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })a3 pitch:(float)a4 yaw:(float)a5 roll:(float)a6;
- (BOOL)changeToNextAction;
- (void)resetPoseDetect;
- (void)sendUIEvent;
- (void)sendStateEvent;
- (void)resetParam;
- (void)handleEvent:(id)a0;
- (void)resetCountDown;
- (void)handleInnerAction:(id)a0 data:(id)a1;
- (id)checksumV2:(id)a0;
- (id)depthDataChecksum:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
