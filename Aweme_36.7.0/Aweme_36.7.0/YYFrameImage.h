@class NSString, NSArray;

@interface YYFrameImage : UIImage <YYAnimatedImage> {
    unsigned long long _loopCount;
    unsigned long long _oneFrameBytes;
    NSArray *_imagePaths;
    NSArray *_imageDatas;
    NSArray *_frameDurations;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)animatedImageFrameCount;
- (double)animatedImageDurationAtIndex:(unsigned long long)a0;
- (id)animatedImageFrameAtIndex:(unsigned long long)a0;
- (unsigned long long)animatedImageLoopCount;
- (unsigned long long)animatedImageBytesPerFrame;
- (id)initWithImagePaths:(id)a0 frameDurations:(id)a1 loopCount:(unsigned long long)a2;
- (id)initWithImageDataArray:(id)a0 frameDurations:(id)a1 loopCount:(unsigned long long)a2;
- (id)initWithImagePaths:(id)a0 oneFrameDuration:(double)a1 loopCount:(unsigned long long)a2;
- (id)initWithImageDataArray:(id)a0 oneFrameDuration:(double)a1 loopCount:(unsigned long long)a2;
- (void).cxx_destruct;

@end
