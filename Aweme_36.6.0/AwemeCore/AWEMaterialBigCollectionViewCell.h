@class AWETrendMaterialModel, UIStackView, UIImageView, IESServiceProvider, UILabel, UIView, UIButton;

@interface AWEMaterialBigCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) AWETrendMaterialModel *materialModel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIStackView *rightStackView;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIImageView *tailImageView;
@property (retain, nonatomic) UIView *skeletionCoverView;
@property (retain, nonatomic) UIView *skeletionInfoView;
@property (copy, nonatomic) id /* block */ actionButtonClickEvent;
@property (weak, nonatomic) IESServiceProvider *provider;

+ (id)reuseIdentifier;

- (void)actionButtonClickHandler;
- (void)setupSkeletonMode;
- (void)configWithModel:(id)a0 serviceProvider:(id)a1 coverLoadCompletion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;

@end
