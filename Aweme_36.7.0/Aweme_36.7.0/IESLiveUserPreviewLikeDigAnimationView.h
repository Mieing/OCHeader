@class UIImageView;
@protocol IESLiveWebPPlayer;

@interface IESLiveUserPreviewLikeDigAnimationView : UIView

@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *webpPlayer;

- (void)p_setupViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
