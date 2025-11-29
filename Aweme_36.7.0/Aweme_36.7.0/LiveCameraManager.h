@class IESMMCaptureKit;
@protocol LiveCameraDelegate, __VeLiveIESMMCaptureKitProtocol;

@interface LiveCameraManager : NSObject {
    BOOL _isAutoFocusEnabled;
}

@property (retain, nonatomic) IESMMCaptureKit<__VeLiveIESMMCaptureKitProtocol> *capture;
@property (weak, nonatomic) id<LiveCameraDelegate> delegate;

+ (unsigned long long)IESMMTransPixelFormat:(unsigned int)a0;
+ (int)intValueForDictionary:(id)a0 key:(id)a1 defaultValue:(int)a2;
+ (BOOL)boolValueForDictionary:(id)a0 key:(id)a1 defaultValue:(BOOL)a2;
+ (double)floatValueForDictionary:(id)a0 key:(id)a1 defaultValue:(double)a2;

- (void)switchCamera;
- (BOOL)exposureAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)getValidDeviceTypesFrom:(id)a0;
- (void)setupVEConfig:(id)a0 withParmas:(id)a1;
- (id)getCaptureConfigFromLiveConfig:(id)a0;
- (int)enableAutoFocus:(BOOL)a0;
- (id)getValidSessionPreset:(id)a0 forKey:(id)a1 defaultValue:(id)a2;
- (id)getValidDeviceTypes:(id)a0 forKey:(id)a1 defaultValue:(id)a2;
- (struct CGSize { double x0; double x1; })captureDimensionFromSessionPreset;
- (id)getAllSupportDeviceTypes;
- (void)resetWithConfig:(id)a0;
- (BOOL)isTorchSupported;
- (int)enableTorch:(BOOL)a0;
- (int)setZoomRatio:(double)a0;
- (double)getCurrentZoomRatio;
- (double)getMaxZoomRatio;
- (double)getMinZoomRatio;
- (int)setFocusPosition:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })captureDimension;
- (void)startCamera;
- (void)stopCamera;
- (struct CGPoint { double x0; double x1; })exposurePoint;
- (BOOL)resetOrientation:(long long)a0;
- (void).cxx_destruct;
- (BOOL)setExposureMode:(long long)a0;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)setParameter:(id)a0;
- (BOOL)isAutoFocusEnabled;
- (id)getParameter:(id)a0;

@end
