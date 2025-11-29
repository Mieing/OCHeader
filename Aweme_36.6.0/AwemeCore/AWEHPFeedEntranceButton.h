@interface AWEHPFeedEntranceButton : AWEHPFeedEntranceView

@property (nonatomic) BOOL useOriginInteractionArea;
@property (nonatomic) BOOL disableOverrideHitTest;

- (void)configImage:(id)a0 Label:(id)a1 position:(unsigned long long)a2;
- (void)configImage:(id)a0 hotWord:(id)a1;
- (void)updateHotword:(id)a0;
- (void)layoutForHotWordStlye;
- (id)init;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
