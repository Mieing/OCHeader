@class NSObject;
@protocol OS_dispatch_queue;

@interface YTBizPalmRegister : NSObject

@property (nonatomic) void *ytHandle;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (nonatomic) long long lastSaveLogTime;
@property (nonatomic) BOOL alreadyNotifySuccess;
@property (readonly, nonatomic) int errCode;
@property (copy, nonatomic) id /* block */ onBufferHandlingTipUpdate;
@property (copy, nonatomic) id /* block */ doLog;

+ (int)convertToYTHandType:(unsigned long long)a0;
+ (id)getTipLocalizedStringKey:(int)a0 tipHandType:(unsigned long long)a1 palmCaptureMode:(unsigned int)a2;
+ (id)getDefaultTipLocalizedStringKey:(unsigned long long)a0;
+ (unsigned long long)convertYTToWxHandType:(int)a0;
+ (unsigned long long)convertSideToWxHandType:(unsigned int)a0;
+ (id)getSdkFullVersion:(id)a0;

- (id)initWithBundlePath:(id)a0;
- (void)dealloc;
- (int)setSdkConfig:(id)a0;
- (int)setLimitHandType:(unsigned long long)a0;
- (struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })matFromBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)handleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)getPipelineResult;
- (id)getImageResultWithHandle:(void *)a0 type:(int)a1;
- (id)getTotalResult;
- (id)UIImageFromCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)UIImageFromCVMat:(struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })a0;
- (void).cxx_destruct;

@end
