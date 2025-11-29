@class UILabel, IESLiveImageView;

@interface AWELiveVSBottomBarView : UIView

@property (retain, nonatomic) IESLiveImageView *icon;
@property (retain, nonatomic) UILabel *desLabel;
@property (retain, nonatomic) IESLiveImageView *arrow;
@property (copy, nonatomic) id /* block */ tapBlock;

- (void)bottomTapped:(id)a0;
- (void).cxx_destruct;
- (void)setDescriptionText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
