@interface FaceRecogReporterFaceTimeMeter : MMObject

@property (nonatomic) unsigned long long enterTime;
@property (nonatomic) unsigned long long enterPreConfirmPageTime;
@property (nonatomic) unsigned long long enterFaceCameraTime;
@property (nonatomic) unsigned long long requestConfigStartTime;
@property (nonatomic) unsigned long long requestConfigEndTime;
@property (nonatomic) unsigned long long recogStartTime;
@property (nonatomic) unsigned long long verifyStartTime;
@property (nonatomic) unsigned long long verifyEndTime;
@property (nonatomic) unsigned long long detectFaceStartTime;
@property (nonatomic) unsigned long long detectFaceEndTime;
@property (nonatomic) unsigned long long poseStartTime;
@property (nonatomic) unsigned long long poseEndTime;
@property (nonatomic) unsigned long long guideStartTime;
@property (nonatomic) unsigned long long guideEndTime;
@property (nonatomic) unsigned long long uploadCdnStartTime;
@property (nonatomic) unsigned long long uploadCdnEndTime;
@property (nonatomic) unsigned long long livenessStartTime;
@property (nonatomic) unsigned long long livenessEndTime;
@property (nonatomic) unsigned long long exitTime;
@property (nonatomic) unsigned int totalFrameCount;

- (unsigned int)getVerifyTime;
- (unsigned int)getPoseTime;
- (unsigned int)getDetectFaceTime;
- (unsigned int)getAvgProcessTimePerFrame;

@end
