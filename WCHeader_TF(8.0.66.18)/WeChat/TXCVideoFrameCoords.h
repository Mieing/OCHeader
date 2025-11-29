@class NSNumber;

@interface TXCVideoFrameCoords : NSObject {
    float _frameVertices[8];
    float _textureCoords[8];
    struct shared_ptr<liteav::BufferT<float>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _perspectiveMatrixBuffer;
}

@property (nonatomic) BOOL outputMirror;
@property (nonatomic) float *vertices;
@property (retain, nonatomic) NSNumber *transform;
@property (nonatomic) unsigned long long outputRotation;
@property (nonatomic) unsigned int orientation;
@property (nonatomic) unsigned long long mirrorMode;
@property (nonatomic) unsigned long long rotation;
@property (nonatomic) unsigned long long fillMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (nonatomic) struct CGSize { double width; double height; } inputSize;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (nonatomic, getter=isViewInLandscape) BOOL viewInLandscape;
@property (nonatomic) unsigned long long flip;
@property (nonatomic) BOOL preorderFlip;
@property (nonatomic) BOOL outputTransformVerticalFlip;
@property (readonly, nonatomic) float *textureCoords;
@property (readonly, nonatomic) BOOL isIdentical;
@property (readonly, nonatomic) BOOL isTrimScaling;
@property (readonly, nonatomic) float *perspectiveMatrix;

+ (unsigned long long)transformOfRotation:(unsigned long long)a0;
+ (unsigned long long)transformTransform:(unsigned long long)a0 rotation:(unsigned long long)a1;
+ (unsigned long long)rotate90OfTransform:(unsigned long long)a0;
+ (unsigned long long)rotate180OfTransform:(unsigned long long)a0;
+ (unsigned long long)rotate270OfTransform:(unsigned long long)a0;
+ (unsigned long long)verticalFlipOfTransform:(unsigned long long)a0;
+ (unsigned long long)horizontalFlipOfTransform:(unsigned long long)a0;
+ (unsigned long long)mirrorOfTransform:(unsigned long long)a0 originOrientation:(unsigned int)a1 outputRotation:(unsigned long long)a2;

- (id)debugDescription;
- (id)init;
- (void)setPerspectiveSrcPoints:(const void *)a0 dstPoints:(const void *)a1;
- (void)applyFrameParamsToMatrix:(struct SkMatrix { float x0[9]; int x1; } *)a0;
- (const float *)rawTextureCoords;
- (unsigned long long)outputTransform;
- (void)updateOutputProperties;
- (void)updateCoords;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
