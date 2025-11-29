@class MMTimer, NSString, MVImageLoader, NSDate, NSObject;
@protocol OS_dispatch_queue, MVImagePlayerDelegate;

@interface MVImagePlayer : NSObject <MVImageLoaderDelegate>

@property (retain, nonatomic) MMTimer *timer;
@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) double currenTimeStamp;
@property (retain, nonatomic) MVImageLoader *imageLoader;
@property (readonly, nonatomic) BOOL isPlaying;
@property (retain, nonatomic) NSDate *startPlayDate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderDispatchQueue;
@property (copy, nonatomic) NSString *imagePath;
@property (copy, nonatomic) NSString *imageId;
@property (nonatomic) long long fps;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (nonatomic) double duration;
@property (nonatomic) unsigned int animationType;
@property (weak, nonatomic) id<MVImagePlayerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)loadImageData;
- (void)start;
- (void)loadImageIfNeeded;
- (void)startPlayWithImage:(id)a0;
- (void)setupDisplayImage:(id)a0;
- (void)_setupDisplayImage:(id)a0;
- (id)resizeImage:(id)a0 toMaxWidth:(int)a1 andMaxHeight:(int)a2;
- (void)dealloc;
- (void)clear;
- (void)pause;
- (void)stop;
- (void)seek:(double)a0;
- (double)timerInterval;
- (void)startTimer;
- (void)_startTimer;
- (void)stopTimer;
- (void)onTimeFired;
- (BOOL)displayImage;
- (id)inputTextureWithImageSize:(struct CGSize { double x0; double x1; })a0 outputSize:(struct CGSize { double x0; double x1; })a1 progress:(double)a2 animationType:(int)a3;
- (void)setupScaleAnimiationForTexture:(id)a0 withStartCenterPoint:(struct CGPoint { double x0; double x1; })a1 endCenterPoint:(struct CGPoint { double x0; double x1; })a2 animationType:(int)a3;
- (void)imageLoader:(id)a0 didLoadImage:(id)a1 urlString:(id)a2;
- (void).cxx_destruct;

@end
