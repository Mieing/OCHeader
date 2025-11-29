@class UIImageView, UILabel, AWEPOITagRateGradeModel;

@interface AWEPOIDetailRateGradeView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *gradeLabel;
@property (retain, nonatomic) AWEPOITagRateGradeModel *tagModel;
@property (copy, nonatomic) id /* block */ onSelect;

- (void)updateWithTag:(id)a0;
- (void).cxx_destruct;
- (void)invalidateIntrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onTap;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;

@end
