@interface MinimizeFloatingBaseView : MMUIView

@property (nonatomic) BOOL isInvisible;

- (BOOL)shouldChangeToInvisible:(BOOL)a0;
- (double)getInvisibleAlpha;
- (void)resetInvisibleAndCheckCount;
- (void)__onFloatingBecomeActiveAndThenCount:(BOOL)a0;
- (void)__makeFloatingInVisible;
- (void)setFloatingVisibleState:(BOOL)a0;

@end
