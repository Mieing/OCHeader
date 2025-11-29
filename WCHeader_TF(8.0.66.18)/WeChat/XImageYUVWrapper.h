@class XImage;

@interface XImageYUVWrapper : NSObject

@property long long format;
@property (retain) XImage *yPanel;
@property (retain) XImage *uPanel;
@property (retain) XImage *vPanel;
@property (retain) XImage *uvPanel;

+ (id)convertPixelBufferToYUVPanel:(struct __CVBuffer { } *)a0;
+ (long long)getFrameFormatFromPixelBuffer:(struct __CVBuffer { } *)a0;

- (void).cxx_destruct;

@end
