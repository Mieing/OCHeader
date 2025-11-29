@class BUPlayer;

@interface CSJPlayableVideoView : UIView

@property (retain, nonatomic) BUPlayer *player;

- (void)addGridentLayer;
- (id)initWithItem:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupViews;
- (void)setupLayout;

@end
