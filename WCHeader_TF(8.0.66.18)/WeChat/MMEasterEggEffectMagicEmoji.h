@class MMTimer, NSString;

@interface MMEasterEggEffectMagicEmoji : MMEasterEggEffect <WeChat.IMEEasterEggAnimationExtension>

@property (nonatomic, getter=isRunning) BOOL running;
@property (retain, nonatomic) MMTimer *timeoutTimer;
@property (retain, nonatomic) NSString *magicEmojiEffectId;

- (BOOL)startEffectWithExtInfo:(id)a0;
- (BOOL)joinEffectWithExtInfo:(id)a0;
- (void)continueEffectWithInteractiveUI:(id)a0;
- (void)endEffectWithReason:(unsigned int)a0;
- (void)setBackgroundView:(id)a0;
- (BOOL)checkMatchForId:(id)a0 sessionId:(id)a1;
- (void)privateEndEffect;
- (void)timeout;
- (id)description;
- (void)onEasterEggAnimationStart:(id)a0 eggKey:(id)a1;
- (void)onEasterEggAnimationClick:(id)a0 eggKey:(id)a1;
- (void)onEasterEggAnimationEnd:(id)a0 eggKey:(id)a1;
- (void).cxx_destruct;

@end
