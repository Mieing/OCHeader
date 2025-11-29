@interface DanceUI.ResponderVisualDebugView : UIHookFreeView {
    void /* unknown type, empty encoding */ geometries;
    void /* unknown type, empty encoding */ boundResponderUUIDs;
    void /* unknown type, empty encoding */ _needsUpdateGeoemtries;
    void /* unknown type, empty encoding */ _needsUpdateBoundResponderUUIDs;
    void /* unknown type, empty encoding */ _reusableLayers;
    void /* unknown type, empty encoding */ _usedLayers;
}

- (void)layoutSublayersOfLayer:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
