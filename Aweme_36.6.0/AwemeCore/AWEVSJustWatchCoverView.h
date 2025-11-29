@class UILabel, UIImageView;

@interface AWEVSJustWatchCoverView : UIView

@property (retain, nonatomic) UILabel *justWatchedInfoLabel;
@property (retain, nonatomic) UIImageView *playIcon;

- (void)addMasonry;
- (void)updateInfoLabel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)createUI;

@end
