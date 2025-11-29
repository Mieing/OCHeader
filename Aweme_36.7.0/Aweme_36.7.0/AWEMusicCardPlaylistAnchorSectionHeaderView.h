@class UIImageView, UILabel;

@interface AWEMusicCardPlaylistAnchorSectionHeaderView : UIView

@property (retain, nonatomic) UIImageView *playerImageView;
@property (retain, nonatomic) UILabel *countLabel;
@property (nonatomic) long long count;
@property (copy, nonatomic) id /* block */ tappedPlayallBlock;

- (void)p_setup;
- (void)p_playTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUI;

@end
