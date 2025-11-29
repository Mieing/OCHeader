@class UIImageView, UILabel, UIButton;

@interface WCCanvasShareComponent : WCCanvasComponent

@property (retain, nonatomic) UIImageView *shareIcon;
@property (retain, nonatomic) UILabel *shareText;
@property (retain, nonatomic) UIButton *hotZone;

+ (struct CGSize { double x0; double x1; })calcSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;

- (void)layoutSubviews;
- (void)initViews;
- (void)updateViews;
- (void)configureWithCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
- (void)onShareComponentClicked;
- (void).cxx_destruct;

@end
