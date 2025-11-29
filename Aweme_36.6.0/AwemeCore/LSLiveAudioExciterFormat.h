@interface LSLiveAudioExciterFormat : NSObject <NSCopying>

@property (nonatomic) double gain;
@property (nonatomic) long long highpassfreq;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
