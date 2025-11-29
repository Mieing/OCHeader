@class NSString, NSArray, CKCamera, CKCameraPreview;

@interface LMImageQualityTrackSceneRecord : NSObject <LMImageQualityTrackSceneProtocol> {
    void /* unknown type, empty encoding */ lock;
    void /* function */ infos;
}

@property (class, nonatomic, readonly) NSString *scene;

@property (nonatomic, weak) void /* function */ session;
@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, retain) CKCamera *camera;
@property (nonatomic, retain) CKCameraPreview *preview;
@property (nonatomic, copy) NSArray *infos;
@property (nonatomic, readonly) BOOL isShoot;
@property (nonatomic) BOOL isCapturing;

- (void)takePicture:(id)a0 veInfo:(id)a1;
- (void)takeVideo:(id)a0 veInfo:(id)a1;
- (id)init:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)track:(id)a0;

@end
