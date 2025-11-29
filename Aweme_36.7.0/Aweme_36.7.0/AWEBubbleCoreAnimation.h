@interface AWEBubbleCoreAnimation : AWEBubbleAnimation

- (id)nextAnimationWithCurrentConfig;
- (id /* block */)rotateTo;
- (id /* block */)dismiss;
- (id /* block */)scale;
- (id /* block */)stop;
- (id /* block */)reveal;
- (id /* block */)move;

@end
