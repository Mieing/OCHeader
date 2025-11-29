@interface LSLiveAudioCompressorFormat : NSObject <NSCopying>

@property (nonatomic) float pregain;
@property (nonatomic) float threshold;
@property (nonatomic) float knee;
@property (nonatomic) float ratio;
@property (nonatomic) float attack;
@property (nonatomic) float relea;
@property (nonatomic) float predelay;
@property (nonatomic) float releasezone1;
@property (nonatomic) float releasezone2;
@property (nonatomic) float releasezone3;
@property (nonatomic) float releasezone4;
@property (nonatomic) float postgain;
@property (nonatomic) float wet;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
