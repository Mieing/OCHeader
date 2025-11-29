@class FaceRecogFlashHandler, NSString, FaceRecogCheckBrightnessLogic;

@interface FaceRecogInternelHandler : FaceRecogBaseHandler <FaceRecogBaseHandlerDelegate, FaceRecogHandlerDelegate, FaceRecogCheckBrightnessLogicDelegate>

@property (retain, nonatomic) FaceRecogCheckBrightnessLogic *brightnessCheckLogic;
@property (retain, nonatomic) FaceRecogFlashHandler *faceHandler;
@property (nonatomic) unsigned int checkAliveType;
@property (nonatomic) float lightThreshold;
@property (retain, nonatomic) NSString *verifyInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)startFace;
- (void)startWithHasCheckBrightness:(BOOL)a0;
- (void)subHandlerRequestAccessVideo;
- (void)didAccessVideo;
- (void)requestStop;
- (void)onDidCheckBrightnessDoneWithIsOK:(BOOL)a0 brightnessValue:(float)a1;
- (void)faceRecogHandlerDidFinish:(id)a0;
- (void)faceRecogHandlerDidCancel:(id)a0;
- (void).cxx_destruct;

@end
