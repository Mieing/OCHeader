@class UIImageView, UIView;

@interface TXLiveContainerView : UIView

@property (retain, nonatomic) UIView *liveView;
@property (retain, nonatomic) UIImageView *snapshotImageView;
@property (nonatomic) BOOL isBackgroundPlaybackActive;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeFromSuperview;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateSnapshot;
- (void).cxx_destruct;

@end
