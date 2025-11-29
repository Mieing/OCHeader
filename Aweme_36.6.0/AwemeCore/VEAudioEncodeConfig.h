@interface VEAudioEncodeConfig : NSObject <NSCopying>

@property (nonatomic) long long bitrate;
@property (nonatomic) long long sampleRate;
@property (nonatomic) long long channel;

+ (id)audioEncodeConfigWithChannel:(long long)a0 sampleRate:(long long)a1 bitrate:(long long)a2;

- (id)toToolboxDicConfig;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
