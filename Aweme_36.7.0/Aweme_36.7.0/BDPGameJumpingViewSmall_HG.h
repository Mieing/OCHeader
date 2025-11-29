@interface BDPGameJumpingViewSmall_HG : BDPGameJumpingView_HG

- (BOOL)setMainViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUIWithMainViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mainViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 models:(id)a2 uniqueID:(id)a3 query:(id)a4 entrance:(id)a5;
- (void)updateModel:(id)a0;

@end
