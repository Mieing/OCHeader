@class AWEDetailCommerceChallengeModel, UIImageView, IESServiceProvider, UILabel;

@interface AWEDetailCommerceChallengeEntranceCell : UICollectionViewCell

@property (retain, nonatomic) AWEDetailCommerceChallengeModel *model;
@property (retain, nonatomic) IESServiceProvider *provider;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;

- (void)configWithModel:(id)a0 serviceProvider:(id)a1;
- (void)clickedChallengeEntrance:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
