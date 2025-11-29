@class UIImageView, UIButton;

@interface AWETeenFeedPendant : UIView

@property (retain, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) id /* block */ closeBlock;

- (void)p_closeButtonClicked;
- (void)p_setupViews;
- (void)p_setupGestures;
- (void)p_pendantClicked;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pendantImage:(id)a1;
- (void).cxx_destruct;

@end
