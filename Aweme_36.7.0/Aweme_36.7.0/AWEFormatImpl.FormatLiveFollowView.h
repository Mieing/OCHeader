@interface AWEFormatImpl.FormatLiveFollowView : LOTAnimationView {
    void /* unknown type, empty encoding */ ownerID;
    void /* unknown type, empty encoding */ params;
    void /* unknown type, empty encoding */ curFollowStatus;
    void /* unknown type, empty encoding */ didClick;
}

- (void)handleFollowClick;
- (id)initWithModel:(id)a0 inBundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)dealloc;

@end
