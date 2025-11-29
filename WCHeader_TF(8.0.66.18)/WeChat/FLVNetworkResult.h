@interface FLVNetworkResult : NSObject

@property (nonatomic) unsigned int videoQualityLevel;
@property (nonatomic) unsigned int avgSpeed;
@property (nonatomic) unsigned int avgFps;
@property (nonatomic) long long networkQuality;

@end
