@class UIImageView, UILabel, UIView;

@interface WCCanvasLocationComponent : WCCanvasComponent

@property (retain, nonatomic) UIImageView *m_lbsIcon;
@property (retain, nonatomic) UIImageView *m_rightIcon;
@property (retain, nonatomic) UILabel *m_poiNameLabel;
@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UIView *bottomLineView;

+ (struct CGSize { double x0; double x1; })calcSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)configureWithCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
- (void)configureLineView:(id)a0;
- (void)updateFrame:(id)a0;
- (void).cxx_destruct;

@end
