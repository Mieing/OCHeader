@class NSMutableArray, DepthFrameData;

@interface YTConvertDepthHelper : NSObject {
    int depthFrameCount;
    float angleBufferThr;
    long long depthIntervalTime;
    long long lastCompareTime;
    float depthOffset;
    DepthFrameData *depthFrameData;
    float ep_thr;
    float np_thr;
    float mp_thr;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previousFaceRect;
    char *cvMatGray;
    float min_face_thr;
    float max_face_thr;
}

@property (retain, nonatomic) NSMutableArray *depthFrameDatas;

+ (id)sharedInstance;
+ (void)clearInstance;

- (void)setNetFetchControlConfig:(int)a0 withIntervalTime:(long long)a1 withOffset:(float)a2 withEP:(float)a3 withNP:(float)a4 withMP:(float)a5 maxFaceThr:(float)a6 minFaceThr:(float)a7;
- (void)startCollectDepthImg;
- (id)stopCollectDepthImg;
- (void)setChecksums:(id)a0;
- (id)getDepthDatas;
- (void)updateFrame:(struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })a0 andDepthBuffer:(id)a1 andCaptureTime:(long long)a2;
- (void)checkDepth:(float)a0 advise:(int)a1 shelterJudge:(int)a2 faceAngleScore:(float)a3 faceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 fivePoints:(id)a5 eyeScore:(float)a6 blurScore:(float)a7;
- (id)makeDepthFrameData:(float)a0 withFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withFivePoints:(id)a2 depQua:(id)a3;
- (struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })depthCIImageToMat:(struct __CVBuffer { } *)a0 withFaceRect:(struct Rect_<int> { int x0; int x1; int x2; int x3; })a1;
- (id)convertPixelBuffer:(struct __CVBuffer { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fivePoints:(id)a2;
- (void)deinit;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })createDepthRectFromFicePoints:(id)a0 width:(double)a1 height:(double)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropDepthImageRectFromFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 width:(double)a1 height:(double)a2;
- (id)cropImage:(id)a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)resizeImage:(id)a0;
- (id)coverInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withFivePoints:(id)a1;
- (id)Judge:(id)a0 withFaceRect:(struct Rect_<int> { int x0; int x1; int x2; int x3; })a1 faceAngleScore:(float)a2 openEyeScore:(float)a3 closeMouthScore:(float)a4 blurScore:(float)a5;
- (float)CalcProportion:(struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })a0 roi:(struct Rect_<int> { int x0; int x1; int x2; int x3; })a1;
- (BOOL)needReplaceCacheDepth:(id)a0 newDepthQuality:(id)a1;
- (BOOL)detectScreenShaking:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lastRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getIntersectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withLastRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (float)judgeFaceScore:(float)a0 imageWidth:(float)a1;
- (float)judgeCloseMouthScore:(float)a0;
- (float)judgeOpenEyesScore:(float)a0;
- (float)judgeShakeScore:(float)a0;
- (float)judgeAngleScore:(float)a0;
- (float)judgeFaceQualityScore:(float)a0;
- (float)judgeBlurScore:(float)a0;
- (void).cxx_destruct;

@end
