@class UILabel, UIButton;

@interface AWEAdSearchLiveInfoCard : UIView <AWEAdSearchLiveInfoCard>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *enterLiveButton;

- (void)updateSubviewsWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
