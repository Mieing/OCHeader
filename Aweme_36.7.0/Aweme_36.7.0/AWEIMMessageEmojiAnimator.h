@class NSPointerArray, NSString;

@interface AWEIMMessageEmojiAnimator : NSObject <AWEIMMessageEmojiAnimatorInterface>

@property (retain, nonatomic) NSPointerArray *animations;
@property (copy, nonatomic) id /* block */ didFinshedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preloadAnimatorResourceIfNeed;

- (void)p_recordAnimation:(id)a0;
- (void)playEmojiReplyAnimationFileAtPath:(id)a0 centerToView:(id)a1;
- (void)playEmojiReplyDoubleClickAnimationWithMessage:(id)a0 forView:(id)a1 bubbleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (void)stopAllAnimations;

@end
