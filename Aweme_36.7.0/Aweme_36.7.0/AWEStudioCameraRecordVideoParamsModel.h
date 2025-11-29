@interface AWEStudioCameraRecordVideoParamsModel : NSObject

@property (nonatomic) BOOL useAudio;
@property (nonatomic) double speed;
@property (nonatomic) BOOL useTorch;
@property (nonatomic) long long hasRecordFragmentCount;

- (id)init;

@end
