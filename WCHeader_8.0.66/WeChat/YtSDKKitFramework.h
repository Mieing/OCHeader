@class NSString, UIImage, UIView, NSMutableArray, NSLock;

@interface YtSDKKitFramework : NSObject {
    NSMutableArray *eventQueue;
    NSLock *queueLock;
}

@property (retain, nonatomic) UIImage *compareImage;
@property (nonatomic) int compareImageType;
@property (retain, nonatomic) UIView *shapeView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previewRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } detectRect;
@property (retain, nonatomic) NSString *modelRootPath;
@property (nonatomic) int networkTimeoutMs;

+ (id)sharedInstance;
+ (void)clearInstance;
+ (void)YTRequestWithUrl:(id)a0 withContent:(id)a1 withHeader:(id)a2 withResponseBlock:(id /* block */)a3;

- (id)getVersion;
- (int)initWithSDKSetting:(id)a0 withPipelineWorkMode:(long long)a1 withPipelineStateNameArray:(id)a2 withCamera:(id)a3 withEventHandleBlock:(id /* block */)a4 withNetworkRequestBlock:(id /* block */)a5;
- (int)deInit;
- (void)updateSDKSetting:(id)a0;
- (void)reset;
- (int)updateWithFrameData:(void *)a0 depthPixelBuffer:(id)a1 withDataType:(unsigned long long)a2;
- (void)doPause;
- (void)doResume;
- (id)getShapeView;
- (void)fireEvent:(unsigned long long)a0 withContent:(id)a1;
- (struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })getCvRgb:(struct opaqueCMSampleBuffer { } *)a0;
- (struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })getCvBgra:(struct opaqueCMSampleBuffer { } *)a0;
- (struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })getCvRgbFromCGImageRef:(struct CGImage { } *)a0;
- (id)createStateByName:(id)a0 withSDKConfigData:(id)a1;
- (void)update:(struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; } *)a0 andDepthBuffer:(id)a1;
- (void).cxx_destruct;

@end
