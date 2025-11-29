@class MAVInputAnimation, MAVVLogLayoutInfo;
@protocol MTLTexture;

@interface MAVVLogInputTexture : NSObject

@property (retain, nonatomic) id<MTLTexture> mtlTexture;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (retain, nonatomic) MAVVLogLayoutInfo *layoutInfo;
@property (retain, nonatomic) MAVVLogLayoutInfo *toLayoutInfo;
@property (retain, nonatomic) MAVInputAnimation *animation;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } position;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (nonatomic) long long rotate;
@property (nonatomic) BOOL needPosition;

- (id)init;
- (void).cxx_destruct;

@end
