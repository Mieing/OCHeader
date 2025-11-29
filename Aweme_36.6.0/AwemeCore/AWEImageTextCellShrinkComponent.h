@interface AWEImageTextCellShrinkComponent : AWEImageTextBaseComponent <AWEImageTextLifeCycleProtocol, AWEImageTextCellShrinkComponentProtocol> {
    void /* unknown type, empty encoding */ shrinkState;
}

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)updateShrinkState:(BOOL)a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 animated:(BOOL)a2 animationDuration:(double)a3;
- (struct AWEImageTextCellShrinkState { BOOL x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; })getShrinkState;
- (id)registerProtocol;
- (id)init;
- (id)initWithManager:(id)a0;

@end
