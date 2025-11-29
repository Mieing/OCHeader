@protocol VERecorderPublicProtocol;

@interface AWEPayFaceLivenessPreviewUnit : NSObject

@property (retain, nonatomic) id<VERecorderPublicProtocol> recorder;
@property (copy, nonatomic) id /* block */ faceDetectedBlock;

+ (id)previewUnitWithView:(id)a0 effectID:(id)a1;

- (void)processExternalVideoInput:(struct opaqueCMSampleBuffer { } *)a0;
- (void).cxx_destruct;

@end
