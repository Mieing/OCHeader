@interface ScaleControl : NSObject {
    BOOL mTouchControlEnable;
    union _GLKMatrix4 { struct { float m00; float m01; float m02; float m03; float m10; float m11; float m12; float m13; float m20; float m21; float m22; float m23; float m30; float m31; float m32; float m33; } ; float m[16]; } mMatrix;
    struct CGPoint { double x; double y; } mTransPrevPoint;
    struct CGPoint { double x; double y; } mScalePrevPoint;
    int mTransPrevTouchNum;
    float mScalePrevVal;
    float mScaleVal;
    float mTransX;
    float mTransY;
    float mScaleTransX;
    float mScaleTransY;
    float mXBoundary;
    float mYBoundary;
    int mViewWidth;
    int mViewHeight;
}

@property (readonly, nonatomic) float currentScale;

- (id)init;
- (void)reset;
- (void)setViewSize:(int)a0 viewHeight:(int)a1;
- (void)setBoundaryVal:(float)a0 YBoundaryVal:(float)a1;
- (float *)getMatrix;
- (float)checkTransVal:(float)a0 boundaryVal:(float)a1;
- (void)checkMatrix;
- (void)checkScale;
- (void)updateMatrix;
- (void)setTouchControlFlag:(BOOL)a0;
- (void)handleGesturesOperation:(id)a0;

@end
