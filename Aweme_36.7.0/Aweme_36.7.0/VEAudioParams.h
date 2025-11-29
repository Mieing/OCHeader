@interface VEAudioParams : NSObject <NSCopying>

@property (nonatomic) int sample_rate;
@property (nonatomic) int channels;
@property (nonatomic) long long channel_layout;
@property (nonatomic) int format;
@property (nonatomic) int nb_samples;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
