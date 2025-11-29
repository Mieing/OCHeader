@class UIImageView, YYLabel;

@interface AWECorpTaskViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *avatorImageView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) YYLabel *descriptionLabel;

+ (id)identifier;

- (void)makeConstraints;
- (void)configWithTask:(id)a0;
- (void)updateAvatarImageView:(id)a0;
- (void)updateTitleText:(id)a0;
- (void)updateDescriptionText:(id)a0;
- (void)updateTaskConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupUI;

@end
