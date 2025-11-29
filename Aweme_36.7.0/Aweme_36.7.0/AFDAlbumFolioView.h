@class UILabel, UIView;

@interface AFDAlbumFolioView : UIView

@property (nonatomic) long long style;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *folioLabel;

- (void)cancelHidePerformRequests;
- (void)showWithAnimate:(BOOL)a0;
- (void)hideWithDelay:(double)a0 animate:(BOOL)a1;
- (void)updateWithCurrentIndex:(long long)a0 totalCount:(long long)a1;
- (void)animatedShow;
- (void)animatedHide;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)show;
- (void)setupUI;

@end
