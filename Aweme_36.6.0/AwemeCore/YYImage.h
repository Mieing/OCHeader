@class YYImageDecoder, NSString, NSArray, NSData, NSObject;
@protocol OS_dispatch_semaphore;

@interface YYImage : UIImage <YYAnimatedImage> {
    YYImageDecoder *_decoder;
    NSArray *_preloadedFrames;
    NSObject<OS_dispatch_semaphore> *_preloadedLock;
    unsigned long long _bytesPerFrame;
}

@property (readonly, nonatomic) unsigned long long animatedImageType;
@property (readonly, nonatomic) NSData *animatedImageData;
@property (readonly, nonatomic) unsigned long long animatedImageMemorySize;
@property (nonatomic) BOOL preloadAllAnimatedImageFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)imageNamed:(id)a0;
+ (id)imageWithContentsOfFile:(id)a0;
+ (id)imageWithData:(id)a0;
+ (id)imageWithData:(id)a0 scale:(double)a1;

- (unsigned long long)animatedImageFrameCount;
- (double)animatedImageDurationAtIndex:(unsigned long long)a0;
- (id)animatedImageFrameAtIndex:(unsigned long long)a0;
- (unsigned long long)animatedImageLoopCount;
- (unsigned long long)animatedImageBytesPerFrame;
- (void).cxx_destruct;
- (id)initWithContentsOfFile:(id)a0;
- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 scale:(double)a1;

@end
