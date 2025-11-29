@interface MMLiveHapticsEvent : NSObject

@property (nonatomic) unsigned long long eventType;
@property (nonatomic) double beginTimeOffset;
@property (nonatomic) double duration;
@property (nonatomic) double intensity;
@property (nonatomic) double sharpness;
@property (nonatomic) double attackTime;
@property (nonatomic) double decayTime;
@property (nonatomic) double releaseTime;
@property (nonatomic) unsigned long long sustain;

+ (id)transientEvent;
+ (id)continuousEvent;

- (id)init;
- (id)initWithEventType:(unsigned long long)a0;
- (id)coreHapticsEvent;

@end
