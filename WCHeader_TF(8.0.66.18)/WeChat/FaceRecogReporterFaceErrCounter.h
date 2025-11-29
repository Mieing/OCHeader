@interface FaceRecogReporterFaceErrCounter : MMObject

@property (nonatomic) unsigned int faceOkCount;
@property (nonatomic) unsigned int motionOkCount;
@property (nonatomic) unsigned int noFaceCount;
@property (nonatomic) unsigned int systemErrCount;
@property (nonatomic) unsigned int noLiveFaceCount;
@property (nonatomic) unsigned int tooDarkCount;
@property (nonatomic) unsigned int tooLightCount;
@property (nonatomic) unsigned int backLightCount;
@property (nonatomic) unsigned int tooSmallCount;
@property (nonatomic) unsigned int tooBigCount;
@property (nonatomic) unsigned int tooActiveCount;
@property (nonatomic) unsigned int poseInvalidCount;
@property (nonatomic) unsigned int timeoutCount;
@property (nonatomic) unsigned int trackFailedCount;
@property (nonatomic) unsigned int unstableCount;
@property (nonatomic) unsigned int poseType;

- (void)recordErrType:(int)a0;

@end
