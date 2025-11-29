@class NSData;

@interface KryptonImageData : NSObject

@property (nonatomic) int width;
@property (nonatomic) int height;
@property (retain, nonatomic) NSData *pixels;

- (void).cxx_destruct;

@end
