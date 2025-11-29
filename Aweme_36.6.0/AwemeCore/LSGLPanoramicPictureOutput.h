@class NSArray, LSGLProgram;

@interface LSGLPanoramicPictureOutput : LSGLPictureOutput {
    unsigned long long _mode;
    NSArray *_fishK;
    NSArray *_fishD;
    long long _erptofishModel;
    float _captureWidth;
    float _captureHeight;
    void *_sphereData;
    void *_planeData;
    union _GLKMatrix4 { struct { float m00; float m01; float m02; float m03; float m10; float m11; float m12; float m13; float m20; float m21; float m22; float m23; float m30; float m31; float m32; float m33; } ; float m[16]; } _modelMatrix;
    union _GLKMatrix4 { struct { float m00; float m01; float m02; float m03; float m10; float m11; float m12; float m13; float m20; float m21; float m22; float m23; float m30; float m31; float m32; float m33; } ; float m[16]; } _viewMatrix;
    union _GLKMatrix4 { struct { float m00; float m01; float m02; float m03; float m10; float m11; float m12; float m13; float m20; float m21; float m22; float m23; float m30; float m31; float m32; float m33; } ; float m[16]; } _projectionMatrix;
    double _cameraPitch;
    double _cameraYaw;
    LSGLProgram *_panoramaProgram;
    float _backgroundColorRed;
    float _backgroundColorGreen;
    float _backgroundColorBlue;
    float _backgroundColorAlpha;
    int _panoPositionAttribute;
    int _panoTextureCoordinateAttribute;
    int _panoInputTextureUniform;
}

- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1;
- (void)updatePanoramicTextureCoordinate;
- (void)renderToFramebufferV2:(id)a0;
- (void)resetCameraRotation;
- (void)setClearColorWithRed:(float)a0 green:(float)a1 blue:(float)a2 alpha:(float)a3;
- (void)rotateCameraWithPitch:(double)a0 yaw:(double)a1;
- (id)initWithOutputFormat:(unsigned int)a0 needUpdateOutputSizeFromInput:(BOOL)a1;
- (void)updateConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setOutputSize:(struct CGSize { double x0; double x1; })a0;

@end
