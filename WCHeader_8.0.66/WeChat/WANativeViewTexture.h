@class UIImage;

@interface WANativeViewTexture : NSObject

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long rotation;
@property (nonatomic) long long contentMode;

- (id)init;
- (void)dealloc;
- (void)seRotation:(long long)a0;
- (struct CGSize { double x0; double x1; })getSize;
- (id)getCIImage;
- (void).cxx_destruct;

@end
