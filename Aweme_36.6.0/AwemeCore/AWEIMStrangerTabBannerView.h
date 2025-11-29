@class YYLabel, UIImageView, UIView;

@interface AWEIMStrangerTabBannerView : UIView

@property (retain, nonatomic) UIView *backColorView;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (copy, nonatomic) id /* block */ tapAction;
@property (copy, nonatomic) id /* block */ closeAction;
@property (retain, nonatomic) UIImageView *iconView;

- (void)refreshWithContent:(id)a0 highlightText:(id)a1;
- (void)bannerViewTapped;
- (id)makeAttrStringWithContent:(id)a0 highlight:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
