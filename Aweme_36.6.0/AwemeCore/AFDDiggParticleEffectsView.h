@class CAEmitterLayer, NSString, NSTimer, CAEmitterCell;

@interface AFDDiggParticleEffectsView : UIView

@property (retain, nonatomic) CAEmitterCell *emitterCell;
@property (retain, nonatomic) CAEmitterLayer *emitterLayer;
@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) NSString *currentAwemeID;

+ (Class)layerClass;

- (void)increaseBirthRate;
- (void)setupEmitter;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)dealloc;
- (void)endAnimation;

@end
