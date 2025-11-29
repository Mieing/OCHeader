@class NSString, AWEVideoPublishViewModel;
@protocol ACCCameraService;

@interface ACCCameraSourceWriter : NSObject <ACCVideoSourceWriterProtocol>

@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) AWEVideoPublishViewModel *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setWriteFps:(long long)a0;
- (BOOL)isMatchInContext:(id)a0 source:(id)a1;
- (void)setPreviewResolution:(struct CGSize { double x0; double x1; })a0;
- (void)setWriteFileResolution:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)setWriteBitrate:(id)a0;
- (id)initWithContext:(id)a0 cameraService:(id)a1;
- (void).cxx_destruct;

@end
