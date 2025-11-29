@class UIImageView, NSString;

@interface IESECommercePlayerView : UIView

@property (retain, nonatomic) UIImageView *playerImageView;
@property (copy, nonatomic) NSString *playerImageName;
@property (copy, nonatomic) NSString *pauseImageName;
@property (nonatomic) BOOL isPlaying;

- (void)setUpSubViews;
- (void)setPlayerViewImageName:(id)a0 pauseImageName:(id)a1 isPlaying:(BOOL)a2;
- (void)updatePlayerViewBackgroundColor:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
