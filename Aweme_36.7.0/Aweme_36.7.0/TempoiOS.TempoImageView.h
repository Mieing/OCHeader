@interface TempoiOS.TempoImageView : BDImageView <NSObject> {
    void /* unknown type, empty encoding */ animationName;
    void /* unknown type, empty encoding */ animationGroup;
    void /* unknown type, empty encoding */ onLoadSuccess;
    void /* unknown type, empty encoding */ onLoadFailed;
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ firstRending;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ autoplay;
    void /* unknown type, empty encoding */ shouldRestartPlay;
    void /* unknown type, empty encoding */ src;
    void /* unknown type, empty encoding */ customTintColor;
}

- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)initWithImage:(id)a0 highlightedImage:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
