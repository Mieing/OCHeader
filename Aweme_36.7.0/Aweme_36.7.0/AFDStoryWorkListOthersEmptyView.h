@class UILabel, UIView;

@interface AFDStoryWorkListOthersEmptyView : UIView

@property (retain, nonatomic) UIView *emptyIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;

- (void)initView;
- (void)updateGenderDisplayString:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
