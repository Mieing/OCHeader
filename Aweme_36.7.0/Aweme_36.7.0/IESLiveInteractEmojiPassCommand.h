@class IESLiveInteractViewTable;

@interface IESLiveInteractEmojiPassCommand : IESLiveInteractEmojiBaseCommand

@property (class, readonly, nonatomic) IESLiveInteractViewTable *viewsTable;

@property (nonatomic) struct CGPoint { double x; double y; } fromCenter;

- (void)dispatch:(id)a0 effect:(id)a1 to:(id)a2;
- (void)linearMoveAnimation:(id)a0 effect:(id)a1 to:(id)a2 completed:(id /* block */)a3;
- (void)passEffectAnimation:(id)a0 effect:(id)a1 to:(id)a2 completed:(id /* block */)a3;
- (struct CGPoint { double x0; double x1; })beginPosition:(id)a0 effect:(id)a1;
- (void)removeAnimation:(id)a0;

@end
