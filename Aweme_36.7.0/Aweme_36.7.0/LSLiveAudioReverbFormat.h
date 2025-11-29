@interface LSLiveAudioReverbFormat : NSObject <NSCopying>

@property (nonatomic) float roomSize;
@property (nonatomic) float hfDamping;
@property (nonatomic) float stereoDepth;
@property (nonatomic) float dry;
@property (nonatomic) float wet;
@property (nonatomic) float dryGainDB;
@property (nonatomic) float wetGainDB;
@property (nonatomic) BOOL dryOnly;
@property (nonatomic) BOOL wetOnly;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
