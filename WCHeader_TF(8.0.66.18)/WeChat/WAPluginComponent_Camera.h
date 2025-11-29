@class WACameraLogicController, NSString, WAArrayBuffer, UIView;
@protocol WAPluginComponent_CameraDelegate, WAJSContextPlugin_NativeViewsRootViewProtocol;

@interface WAPluginComponent_Camera : NSObject <WACameraLogicControllerDelegate> {
    WACameraLogicController *_cameraLogic;
    unsigned int _curCameraID;
    BOOL _bIsRecording;
    UIView *_cameraView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cameraPreviewFrame;
    NSString *_photoQuality;
    id /* block */ _photoOpearateBlock;
    id /* block */ _videoOpearateBlock;
    unsigned long long _startRecordTime;
    BOOL _bHasParentId;
    int _resolution;
    struct CGSize { double width; double height; } _szOutput;
    double _frameMinLength;
    long long _orientation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cameraViewMaskRect;
    WAArrayBuffer *_arrayBuffer;
    void *_originData;
    void *_reflectData;
    void *_scaleSrcData;
    void *_clipSrcData;
    int _bufferId;
    BOOL _centerCrop;
    NSString *_appId;
}

@property (nonatomic) BOOL enableFullScreen;
@property (nonatomic) BOOL isViewDidAppear;
@property (weak, nonatomic) id<WAJSContextPlugin_NativeViewsRootViewProtocol> embedViewDelegate;
@property (weak, nonatomic) id<WAPluginComponent_CameraDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fixCameraRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCameraViewMaskWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setScanArea:(id)a0;
- (unsigned int)insertCameraWithConfig:(id)a0 pos:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cameraId:(unsigned int)a2 parentId:(unsigned int)a3 size:(struct CGSize { double x0; double x1; } *)a4;
- (void)resizeVideo:(unsigned int)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)operateCamera:(id)a0 cameraId:(unsigned int)a1 compelete:(id /* block */)a2;
- (void)removeCamera;
- (void)handleUIOrientationChanged;
- (void)setCameraFront:(BOOL)a0;
- (void)onCameraInitDone;
- (void)onCameraNeedAuthCancel;
- (void)onCameraStop;
- (void)onCameraStartRecord:(int)a0;
- (void)onCameraStopRecord;
- (void)onCameraScanCode:(id)a0;
- (void)onCameraFrame:(struct opaqueCMSampleBuffer { } *)a0;
- (void)onCameraVideoRecordingWithFrameImg:(id)a0;
- (void)onCameraPictureTaken:(id)a0 withFrontCamera:(BOOL)a1;
- (double)getCompressQuality;
- (void)onCameraVideoTakenSuccess:(id)a0 thumbImg:(id)a1 isMuted:(BOOL)a2;
- (id)videoParamsByVideoPath:(id)a0;
- (void)tryStopRecordAndNotifyVideoRecordEnd;
- (void)notifyRecordVideoEnd:(id)a0 ThumbLocalID:(id)a1 otherParams:(id)a2;
- (void)onCameraVideoTakenFail;
- (void)sendEvent:(id)a0 param:(id)a1;
- (unsigned int)insertChildView:(id)a0 viewId:(unsigned int)a1 parentId:(unsigned int)a2;
- (void)updateParentId:(unsigned int)a0 forChild:(unsigned int)a1;
- (id)getChildView:(unsigned int)a0;
- (BOOL)removeChildView:(unsigned int)a0;
- (void).cxx_destruct;

@end
