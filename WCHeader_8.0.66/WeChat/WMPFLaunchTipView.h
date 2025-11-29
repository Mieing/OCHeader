@interface WMPFLaunchTipView : UIView

@property (nonatomic) BOOL isGame;
@property (nonatomic) BOOL hasBeginShow;
@property (nonatomic) BOOL animateShowFinished;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isGame:(BOOL)a1;
- (void)buildView;
- (void)animateShowWithCompleteHandler:(id /* block */)a0;
- (void)animateHideWithDelay:(double)a0;
- (void)layoutSubviews;
- (void)dealloc;

@end
