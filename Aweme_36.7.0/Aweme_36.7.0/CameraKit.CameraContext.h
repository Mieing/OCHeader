@class NSString, IESMMCameraConfig, IESMMCaptureOptions, UIView, _TtC9CameraKit10CameraView;

@interface CameraKit.CameraContext : NSObject <CameraKit.CameraContextProtocol> {
    void /* function */ bytebenchID;
    void /* function */ cameraActionBlock;
}

@property (nonatomic, readonly) NSString *bytebenchID;
@property (nonatomic, retain) IESMMCameraConfig *cameraConfig;
@property (nonatomic, readonly) IESMMCaptureOptions *captureOptions;
@property (nonatomic, retain) UIView *cameraPreview;
@property (nonatomic, retain) _TtC9CameraKit10CameraView *cameraView;
@property (nonatomic) BOOL needCreateCamera;
@property (nonatomic) BOOL canDegradeResolution;
@property (nonatomic) BOOL hadDegradeResolution;
@property (nonatomic) struct CGSize { double x0; double x1; } degradeSize;
@property (nonatomic, readonly) id /* block */ cameraActionBlock;

- (id)initWithPreviewView:(id)a0 cameraView:(id)a1 cameraActionBlock:(id /* block */)a2 bytebenchID:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
