@class NSString;

@interface IESCollectionButton : IESLiveButton <CAAnimationDelegate>

@property (nonatomic) BOOL storedSelectedState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginFirstTouchAnimation;
- (void)beginSecondTouchAnimation;
- (void)beginTouchAnimationWithSelected:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;

@end
