@class NSArray, NSMutableDictionary, LynxUI;

@interface LynxKeyframeManager : NSObject {
    NSArray *_infos;
    NSMutableDictionary *_animators;
}

@property (weak, nonatomic) LynxUI *ui;
@property (nonatomic) BOOL autoResumeAnimation;

- (void)notifyBGLayerAdded;
- (id)initWithUI:(id)a0;
- (void)notifyAnimationUpdated;
- (void)notifyPropertyUpdated:(id)a0 value:(id)a1;
- (void)detachFromUI;
- (void)attachToUI:(id)a0;
- (void)endAllAnimation;
- (BOOL)hasAnimationRunning;
- (void)setAnimation:(id)a0;
- (void).cxx_destruct;
- (void)resumeAnimation;
- (void)setAnimations:(id)a0;
- (void)resetAnimation;
- (void)restartAnimation;

@end
