@class CJPayStyleCheckMark, CJPaySignAssetInfoModel, UIImageView, UILabel, UIView, MASConstraint;

@interface CJPaySignAssetCommonCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) CJPayStyleCheckMark *confirmImageView;
@property (retain, nonatomic) UIImageView *rightArrowImageView;
@property (retain, nonatomic) UIView *disableView;
@property (retain, nonatomic) MASConstraint *titleLabelCenterBaseContentViewConstraint;
@property (retain, nonatomic) MASConstraint *titleLabelTopBaseContentViewConstraint;
@property (retain, nonatomic) MASConstraint *titleLabelLeftBaseIconImageViewConstraint;
@property (retain, nonatomic) CJPaySignAssetInfoModel *assetInfoModel;

- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateContent:(id)a0;

@end
