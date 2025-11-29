@class CAKeyframeAnimation;
@protocol CAMediaTiming;

@interface EditImageAnimatedLayer : CALayer {
    CAKeyframeAnimation *m_contentsAnimation;
}

@property (weak, nonatomic) id<CAMediaTiming> timingObj;

- (void)addAnimation:(id)a0 forKey:(id)a1;
- (void)removeAnimationForKey:(id)a0;
- (void)layoutIfNeeded;
- (void)layoutSublayers;
- (void).cxx_destruct;

@end
