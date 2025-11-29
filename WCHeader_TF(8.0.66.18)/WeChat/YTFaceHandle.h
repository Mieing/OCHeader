@class NSString, NSTimer, YtVideoSetting, NSMutableArray;
@protocol YTAGReflectDeviceDelegate;

@interface YTFaceHandle : NSObject {
    BOOL LooseMode;
    struct Mat { int flags; int dims; int rows; int cols; char *data; int *refcount; char *datastart; char *dataend; char *datalimit; struct MatAllocator *allocator; struct MSize { int *p; } size; struct MStep { unsigned long long *p; unsigned long long buf[2]; } step; } BestImg;
    double _timerInterval;
    float eps;
    BOOL FirstISOFrame;
    NSTimer *countTimer;
    long long triggerTimes;
    NSMutableArray *landmarksVec;
    NSString *mRgbConfig;
    NSString *mAppId;
    id /* block */ _onDalayCalc;
    id /* block */ _onFinish;
    BOOL isReflecting;
    double initLight;
    struct YTFaceReflect { void /* function */ *encodeJpeg; void /* function */ *stateChangeCB; void /* function */ *screenCB; void /* function */ *cameraCB; void /* function */ *fetchCB; struct thread { struct _opaque_pthread_t *__t_; } reflectThread; struct SS *privateInst; struct SSData *mSSData; BOOL cancelTask; struct Mat { int flags; int dims; int rows; int cols; char *data; int *refcount; char *datastart; char *dataend; char *datalimit; struct MatAllocator *allocator; struct MSize { int *p; } size; struct MStep { unsigned long long *p; unsigned long long buf[2]; } step; } BestImg; void *mCaller; int mTriggerTimes; float initLight; struct YTDeviceInfo { float deviceISO; float minISO; float maxISO; } deviceInfo; } m_reflectHandle;
}

@property (retain, nonatomic) YtVideoSetting *setting;
@property (retain, nonatomic) NSString *dir_path;
@property (weak, nonatomic) id<YTAGReflectDeviceDelegate> device;
@property (retain, nonatomic) NSMutableArray *BestImgPts;
@property (copy, nonatomic) id /* block */ reflectCallback;

+ (void)registerSDKLogger:(int)a0 withListener:(id /* block */)a1;
+ (id)checksum:(id)a0 withData:(id)a1;

- (id)initWithAppId:(id)a0 withExtraData:(id)a1;
- (void)setReflectEvent:(id /* block */)a0;
- (id)getVersion;
- (void)stopCountTimer;
- (id)colorWithHex:(unsigned int)a0;
- (void)setARGB:(unsigned int)a0 screenLight:(double)a1;
- (void)handleDelayFinish;
- (void)handleFinish;
- (long long)initAG:(id)a0 device:(id)a1 shapeView:(id)a2 onDalayCalc:(id /* block */)a3 onFinish:(id /* block */)a4 outputDurationMS:(long long *)a5;
- (void)clearAG;
- (id)AutoGenRgb:(int)a0 mode:(id)a1;
- (int)getAGLabelShowing;
- (void)setSafety:(int)a0;
- (int)getSafety;
- (void *)getFullPack;
- (id)getBestImg:(struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; } *)a0;
- (double)Get_ISObackup;
- (id)getDirPath;
- (double)getTimeIntercal;
- (long long)GenDataPack;
- (float)precheckCloseEye:(id)a0;
- (int)processImgSequence;
- (void)getFaces;
- (void)PushImgSequence:(void *)a0 faceAlign:(id)a1 timeStamp:(unsigned long long)a2;
- (id)UIImageFromCVMat:(struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
