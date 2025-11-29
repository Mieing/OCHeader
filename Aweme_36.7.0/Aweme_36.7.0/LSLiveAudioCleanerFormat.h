@interface LSLiveAudioCleanerFormat : NSObject <NSCopying>

@property (nonatomic) double sampleRate;
@property (nonatomic) unsigned long long transformType;
@property (nonatomic) BOOL bAGC;
@property (nonatomic) BOOL bANS;
@property (nonatomic) BOOL bAEC;
@property (nonatomic) BOOL bLimiter;
@property (nonatomic) BOOL bHighNoiseMode;
@property (nonatomic) BOOL bBeam;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
