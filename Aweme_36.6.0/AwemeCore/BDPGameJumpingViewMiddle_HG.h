@class NSString, UIView;

@interface BDPGameJumpingViewMiddle_HG : BDPGameJumpingView_HG

@property (readonly, copy, nonatomic) NSString *backgroundUrl;
@property (retain, nonatomic) UIView *backgroundView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 models:(id)a1 uniqueID:(id)a2 query:(id)a3 entrance:(id)a4;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateModel:(id)a0;
- (void)updateSize:(long long)a0;

@end
