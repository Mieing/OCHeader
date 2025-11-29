@class LSGLPictureInput, LSGLProgram;

@interface LSGLFrameConverter : NSObject {
    unsigned int _inPixelFmt;
    BOOL _isVideoRange;
    LSGLProgram *_yuvConversionProgram;
    LSGLPictureInput *_picInput;
}

+ (void *)ConvertVideoFrameBufferToVeLiveVideoFrame:(id)a0;
+ (id)ConvertVideoFrameBufferFromVeLiveVideoFrame:(const void *)a0;
+ (id)ConvertPixelBufferToLSGLFrameBuffer:(struct __CVBuffer { } *)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)ConvertPixelBufferToLSGLFrameBufferWithLSGLPictureInput:(struct __CVBuffer { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
