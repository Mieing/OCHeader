@interface IESLiveVSGiftPanelNonClipViewContainer : IESLiveLayerContainerView

@property (copy, nonatomic) id /* block */ touchOutsideBlock;

- (void)addSubview:(id)a0 originalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 originalSuperview:(id)a2;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
