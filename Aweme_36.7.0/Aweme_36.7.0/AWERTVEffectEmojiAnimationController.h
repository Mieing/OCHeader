@class NSString, AWERTVEffectEmojiAnimationView, CHHapticEngine;
@protocol RTVXRStateRecorder, RxInjector, RTVVoipContextManagerInterface;

@interface AWERTVEffectEmojiAnimationController : NSObject <RTVEffectEmojiAnimationController>

@property (weak, nonatomic) AWERTVEffectEmojiAnimationView *animationView;
@property (retain, nonatomic) CHHapticEngine *hapticEngine;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface> contextManager;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (nonatomic) BOOL animationEnable;
@property (readonly, weak, nonatomic) id<RTVXRStateRecorder> xrStateRecorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (BOOL)__interfaceOrientationLayoutIsPortrait;
- (void)__playHapticWithFilePath:(id)a0;
- (BOOL)__isSupportHaptics;
- (void)playEffectEmojiAnimation:(id)a0;
- (void)changeEmojiPlayAnimationEnable:(BOOL)a0;
- (void).cxx_destruct;

@end
