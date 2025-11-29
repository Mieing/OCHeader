@class NSString, GPUImageFramebuffer, GLProgram;

@interface GPUImageView : UIView <GPUImageInput> {
    unsigned long long inputRotation;
    GPUImageFramebuffer *inputFramebufferForDisplay;
    unsigned int displayRenderbuffer;
    unsigned int displayFramebuffer;
    GLProgram *displayProgram;
    int displayPositionAttribute;
    int displayTextureCoordinateAttribute;
    int displayInputTextureUniform;
    struct CGSize { double width; double height; } inputImageSize;
    float imageVertices[8];
    float backgroundColorRed;
    float backgroundColorGreen;
    float backgroundColorBlue;
    float backgroundColorAlpha;
    struct CGSize { double width; double height; } boundsSizeAtFrameBufferEpoch;
}

@property (nonatomic) unsigned long long aspectRatio;
@property (nonatomic) unsigned long long fillMode;
@property (readonly, nonatomic) struct CGSize { double width; double height; } sizeInPixels;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;
+ (const float *)textureCoordinatesForRotation:(unsigned long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (void)layoutSubviews;
- (void)dealloc;
- (void)createDisplayFramebuffer;
- (void)destroyDisplayFramebuffer;
- (void)setDisplayFramebuffer;
- (void)presentFramebuffer;
- (void)recalculateViewGeometry;
- (void)setBackgroundColorRed:(float)a0 green:(float)a1 blue:(float)a2 alpha:(float)a3;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1;
- (long long)nextAvailableTextureIndex;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1;
- (int)generateFrameBuffer:(BOOL)a0 newSize:(struct CGSize { double x0; double x1; })a1;
- (void)destroyFrameBuffer;
- (void)setInputRotation:(unsigned long long)a0 atIndex:(long long)a1;
- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })maximumOutputSize;
- (void)endProcessing;
- (BOOL)shouldIgnoreUpdatesToThisTarget;
- (BOOL)wantsMonochromeInput;
- (void)setCurrentlyReceivingMonochromeInput:(BOOL)a0;
- (void).cxx_destruct;

@end
