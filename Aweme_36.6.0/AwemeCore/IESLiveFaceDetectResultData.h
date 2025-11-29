@interface IESLiveFaceDetectResultData : IESLiveAlgorithmResultData

@property (nonatomic) double yaw;
@property (nonatomic) double pitch;
@property (nonatomic) double roll;
@property (nonatomic) unsigned long long action;

- (id)init;

@end
