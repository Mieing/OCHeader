@class UILabel, UIImageView;

@interface AWEPlaylistDetailOwerInfoView : UIView

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (copy, nonatomic) id /* block */ tappedBlock;

- (void)p_setup;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tapped:(id)a0;

@end
