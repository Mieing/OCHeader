@class UILabel, UIView, ACCAIGCLoraCreateExampleView;

@interface ACCAIGCLoraResultHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) ACCAIGCLoraCreateExampleView *tipsView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIView *leftLine;
@property (retain, nonatomic) UILabel *middleLabel;
@property (retain, nonatomic) UIView *rightLine;
@property (nonatomic) double sectionFirstHeight;

+ (double)heightWithType:(unsigned long long)a0;

- (void)updateViewsWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpViews;

@end
