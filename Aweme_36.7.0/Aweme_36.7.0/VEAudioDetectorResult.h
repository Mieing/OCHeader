@interface VEAudioDetectorResult : IESMMObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) double peak;
@property (nonatomic) double loudness;

- (id)init;

@end
