@class UIImage;

@interface MMLiveFaceTrackTask : NSObject

@property (retain, nonatomic) UIImage *sourceImage;

- (id)initWithSourcePixelBuffer:(struct __CVBuffer { } *)a0 context:(id)a1;
- (id)transferPixelBufferToImage:(struct __CVBuffer { } *)a0 context:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;

@end
