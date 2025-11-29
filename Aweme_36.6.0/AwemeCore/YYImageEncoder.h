@class NSMutableArray;

@interface YYImageEncoder : NSObject {
    NSMutableArray *_images;
    NSMutableArray *_durations;
}

@property (readonly, nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long loopCount;
@property (nonatomic) BOOL lossless;
@property (nonatomic) double quality;

+ (id)encodeImage:(id)a0 type:(unsigned long long)a1 quality:(double)a2;
+ (id)encodeImageWithDecoder:(id)a0 type:(unsigned long long)a1 quality:(double)a2;

- (struct CGImageDestination { } *)_newImageDestination:(id)a0 imageCount:(unsigned long long)a1;
- (void)_encodeImageWithDestination:(struct CGImageDestination { } *)a0 imageCount:(unsigned long long)a1;
- (struct CGImage { } *)_newCGImageFromIndex:(unsigned long long)a0 decoded:(BOOL)a1;
- (BOOL)_imageIOAvaliable;
- (id)_encodeWithImageIO;
- (id)_encodeAPNG;
- (id)_encodeWebP;
- (BOOL)_encodeWithImageIO:(id)a0;
- (void)addImageWithData:(id)a0 duration:(double)a1;
- (void)addImageWithFile:(id)a0 duration:(double)a1;
- (BOOL)encodeToFile:(id)a0;
- (void)addImage:(id)a0 duration:(double)a1;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (id)init;
- (id)encode;

@end
