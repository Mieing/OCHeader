@class UIImageView, UILabel, UIView, UIButton;

@interface IESGCPDetailFansGroupStyleView : UIView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *fansGroupCountLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *profileImageView;
@property (retain, nonatomic) UIButton *joinButton;
@property (copy, nonatomic) id /* block */ clickedBlock;
@property (copy, nonatomic) id /* block */ profileImageClickedBlock;
@property (copy, nonatomic) id /* block */ titleLabelClickedBlock;

- (void)joinButtonClicked:(id)a0;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
