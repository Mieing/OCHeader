@class IESLiveInteractViewTable;

@interface IESLiveInteractEmojiTrayDynamicCommand : IESLiveInteractEmojiBaseCommand

@property (class, readonly, nonatomic) IESLiveInteractViewTable *trayDynamicAnimTable;

- (id)constructVectorFrom:(struct CGPoint { double x0; double x1; })a0 to:(struct CGPoint { double x0; double x1; })a1;
- (double)normOfVector:(id)a0;
- (double)vector:(id)a0 dotProduct:(id)a1;
- (id)vector:(id)a0 crossProduct:(id)a1;
- (BOOL)vector:(id)a0 hasSameDirectionWith:(id)a1;
- (void)dispatch:(id)a0 effect:(id)a1 to:(id)a2;
- (void)batchDispatch:(id)a0 effect:(id)a1 to:(id)a2;
- (void)trayDynamicSeatAnimation:(id)a0 effect:(id)a1 user:(id)a2 completed:(id /* block */)a3;
- (double)getAngleFortrayDynamicAnimWithFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)removeAnimation:(id)a0;

@end
