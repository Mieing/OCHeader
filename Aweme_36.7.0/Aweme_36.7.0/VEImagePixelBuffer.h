@class NSString;

@interface VEImagePixelBuffer : NSObject

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (copy, nonatomic) NSString *key;

- (void).cxx_destruct;
- (void)dealloc;

@end
