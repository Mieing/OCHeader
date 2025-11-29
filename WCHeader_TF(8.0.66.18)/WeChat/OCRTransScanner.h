@class NSString, CameraScannerViewWrapper, UIImage, UploadDetectLogic;
@protocol OCRTransScannerDelegate;

@interface OCRTransScanner : MMObject <IOCRTransMgrExt, CameraScannerViewDelegate> {
    int _imageType;
    unsigned long long _frameCount;
    long long _orientation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cameraPhotoCropRect;
    UploadDetectLogic *_uploadDetectLogic;
    BOOL _enableUpload;
    char *_sendImage;
    unsigned int _scene;
}

@property (weak, nonatomic) CameraScannerViewWrapper *cameraScannerWrapper;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (nonatomic) unsigned int sessionId;
@property (weak, nonatomic) id<OCRTransScannerDelegate> delegate;
@property (retain, nonatomic) UIImage *sourceImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCameraScannerViewWrapper:(id)a0;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)enableUpload:(BOOL)a0;
- (void)fireWithScene:(unsigned int)a0;
- (unsigned int)sendImage:(id)a0 scene:(unsigned int)a1;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (unsigned int)notifySendData:(id)a0;
- (void)onSendTransImageData:(unsigned int)a0 ret:(id)a1 pbCGIWrap:(id)a2;
- (void).cxx_destruct;

@end
