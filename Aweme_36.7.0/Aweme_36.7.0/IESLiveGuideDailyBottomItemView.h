@class UILabel, UIImageView, UIView;

@interface IESLiveGuideDailyBottomItemView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *customView;
@property (retain, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void)setupViews:(id)a0 imageName:(id)a1;
- (void)itemDidClick;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 imageName:(id)a2;
- (void).cxx_destruct;

@end
