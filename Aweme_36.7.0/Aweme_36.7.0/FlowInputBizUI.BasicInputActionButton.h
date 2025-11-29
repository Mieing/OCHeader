@interface FlowInputBizUI.BasicInputActionButton : UIButton {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ onClick;
    void /* unknown type, empty encoding */ isEnabledChanged;
    void /* unknown type, empty encoding */ hitTestEdgeInsets;
}

@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL enabled;

- (void)buttonClicked:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEnabled;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
