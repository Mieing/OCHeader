@class UILabel;

@interface AWERichAwemeLifeCardImageDescView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *descriptionSecondLabel;
@property (retain, nonatomic) UILabel *extraDescriptionLabel;

- (void)configSubviewsWithModel:(id)a0;
- (void)setLayoutTitleLabelWithModel:(id)a0 topView:(id)a1;
- (void)setLayoutDescLabelWithModel:(id)a0 topView:(id)a1;
- (void)setLayoutDescSecondLabelWithModel:(id)a0 topView:(id)a1;
- (void)setLayoutExtraLabelWithModel:(id)a0 LeftView:(id)a1;
- (void).cxx_destruct;

@end
