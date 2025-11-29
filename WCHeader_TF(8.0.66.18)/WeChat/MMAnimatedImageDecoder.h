@class NSString, UIImage;

@interface MMAnimatedImageDecoder : MMObject

@property (readonly, nonatomic) NSString *cpKey;
@property (readonly, nonatomic) UIImage *currentFrameImage;
@property (readonly, nonatomic) double currentFrameDuration;
@property (readonly, nonatomic) int currentFrameId;
@property (readonly, nonatomic) int frameCount;
@property (readonly, nonatomic) struct CGSize { double width; double height; } imageSize;
@property (readonly, nonatomic) BOOL hasDecodeOneLoop;
@property (readonly, nonatomic) BOOL isSingleFrame;
@property (readonly, nonatomic) int decodedLoopCnt;
@property (nonatomic) double scale;

+ (int)frameCountForImageData:(id)a0;
+ (id)animatedImageOfData:(id)a0;
+ (id)animatedImageOfData:(id)a0 tryUIImageWhenFailed:(BOOL)a1;
+ (id)framesOfData:(id)a0;
+ (id)framesOfData:(id)a0 scale:(double)a1;
+ (id)framesOfData:(id)a0 scale:(double)a1 cpKey:(id)a2;
+ (id)animationOfFrames:(id)a0;
+ (id)animationOfData:(id)a0 scale:(double)a1;
+ (id)animationOfData:(id)a0 scale:(double)a1 cpKey:(id)a2;
+ (id)animatedDecoderOfData:(id)a0;
+ (id)animatedDecoderOfData:(id)a0 cpKey:(id)a1;
+ (id)animatedDecoderOfData:(id)a0 config:(id)a1;

- (BOOL)rewind;
- (BOOL)seekToNextFrame;
- (void).cxx_destruct;

@end
