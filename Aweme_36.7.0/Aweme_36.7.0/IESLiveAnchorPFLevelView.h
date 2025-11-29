@class UIStackView, UIImageView, IESLiveAnchorPFLevelModel, IESLiveGradientView, UILabel;

@interface IESLiveAnchorPFLevelView : UIView

@property (retain, nonatomic) IESLiveAnchorPFLevelModel *model;
@property (retain, nonatomic) IESLiveGradientView *gradientView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIStackView *subTitleStackView;
@property (retain, nonatomic) UIImageView *subTitleArrow;
@property (retain, nonatomic) UILabel *subTitleLabel;

- (void)updateUIWithModel:(id)a0;
- (void)subTitleLabelDidTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setupLayout;

@end
