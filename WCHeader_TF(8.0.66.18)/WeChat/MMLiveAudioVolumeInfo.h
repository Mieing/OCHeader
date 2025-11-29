@interface MMLiveAudioVolumeInfo : NSObject

@property (nonatomic) long long business;
@property (nonatomic) long long volume;

+ (id)createAudioVolume:(long long)a0 business:(long long)a1;

- (id)description;

@end
