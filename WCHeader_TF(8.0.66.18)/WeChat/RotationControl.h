@class CMMotionManager;

@interface RotationControl : NSObject {
    float mDeltaX;
    float mDeltaY;
    BOOL mTouchControlEnable;
    BOOL mSensorControlEnable;
    BOOL mKeepLastSensor;
    BOOL mIsEnableScale;
    union _GLKMatrix4 { struct { float m00; float m01; float m02; float m03; float m10; float m11; float m12; float m13; float m20; float m21; float m22; float m23; float m30; float m31; float m32; float m33; } ; float m[16]; } mModelMatrix;
    union _GLKMatrix4 { struct { float m00; float m01; float m02; float m03; float m10; float m11; float m12; float m13; float m20; float m21; float m22; float m23; float m30; float m31; float m32; float m33; } ; float m[16]; } mViewMatrix;
    union _GLKMatrix4 { struct { float m00; float m01; float m02; float m03; float m10; float m11; float m12; float m13; float m20; float m21; float m22; float m23; float m30; float m31; float m32; float m33; } ; float m[16]; } mPerspectiveMatrix;
    union _GLKMatrix4 { struct { float m00; float m01; float m02; float m03; float m10; float m11; float m12; float m13; float m20; float m21; float m22; float m23; float m30; float m31; float m32; float m33; } ; float m[16]; } mMVPMatrix;
    union _GLKMatrix4 { struct { float m00; float m01; float m02; float m03; float m10; float m11; float m12; float m13; float m20; float m21; float m22; float m23; float m30; float m31; float m32; float m33; } ; float m[16]; } mMVMatrix;
    float mHalfFOVHor;
    float mHalfFOVVer;
    float mMaxHalfFOVHor;
    float mMinHalfFOVHor;
    float mMaxHalfFOVVer;
    float mMinHalfFOVVer;
    struct CGPoint { double x; double y; } mPrevPoint;
    float sDensity;
    float sDamping;
    float mGlobalScale;
    float mTouchSensitivity;
    float mScaleVal;
    float mSensitivity;
    int mViewWidth;
    int mViewHeight;
    BOOL mRegistered;
    BOOL mInitSensorInfo;
    float mPitch;
    float mYaw;
    float mSensorDensity;
}

@property (retain, nonatomic) CMMotionManager *mMotionManager;

- (id)init;
- (void)reset;
- (void)setTouchControlFlag:(BOOL)a0;
- (void)setSensorControlFlag:(BOOL)a0 keepLastSensor:(BOOL)a1;
- (void)setDeltaXAndY:(float)a0 DeltaY:(float)a1;
- (float)getDeltaY;
- (float)getDeltaX;
- (void)setPerspectiveMatrix:(float)a0 Right:(float)a1 Bottom:(float)a2 Top:(float)a3 Near:(float)a4 Far:(float)a5;
- (void)updataViewMatrix;
- (float *)getRotation;
- (int)registerSensor;
- (int)unregisterSensor;
- (void)setHalfFOVHor:(float)a0 viewWidth:(int)a1 viewHeight:(int)a2;
- (void)setHalfFOVVer:(float)a0 viewWidth:(int)a1 viewHeight:(int)a2;
- (void)setSmallHalfFOVVer:(float)a0 viewWidth:(int)a1 viewHeight:(int)a2;
- (float)scaled:(float)a0;
- (void)handleGesturesOperation:(id)a0;
- (void)setScalePerspectiveMatrix;
- (void)resetPitchAndYaw;
- (void)setMaxMinHalfFOVHor:(float)a0 MaxVal:(float)a1;
- (void)setMaxMinHalfFOVVer:(float)a0 MaxVal:(float)a1;
- (void).cxx_destruct;

@end
