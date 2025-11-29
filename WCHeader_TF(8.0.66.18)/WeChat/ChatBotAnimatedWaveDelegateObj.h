@class NSString, ChatBotAnimatedWaveView;

@interface ChatBotAnimatedWaveDelegateObj : NSObject <CAAnimationDelegate>

@property (weak, nonatomic) ChatBotAnimatedWaveView *weakAnimationView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;

@end
