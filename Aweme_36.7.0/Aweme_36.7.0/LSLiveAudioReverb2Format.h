@interface LSLiveAudioReverb2Format : NSObject <NSCopying>

@property (nonatomic) int sampleRate;
@property (nonatomic) int oversamplefactor;
@property (nonatomic) float ertolate;
@property (nonatomic) float erefwet;
@property (nonatomic) float dry;
@property (nonatomic) float ereffactor;
@property (nonatomic) float erefwidth;
@property (nonatomic) float width;
@property (nonatomic) float wet;
@property (nonatomic) float wander;
@property (nonatomic) float bassb;
@property (nonatomic) float spin;
@property (nonatomic) float inputlpf;
@property (nonatomic) float basslpf;
@property (nonatomic) float damplpf;
@property (nonatomic) float outputlpf;
@property (nonatomic) float rt60;
@property (nonatomic) float delay;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
