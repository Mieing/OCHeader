@class UILabel, UIImageView, IESLLLiveBizAttributeModel;

@interface IESLLLiveStickerCardCell : UITableViewCell

@property (retain, nonatomic) UILabel *leftTitleLabel;
@property (retain, nonatomic) UILabel *rightTitleLabel;
@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) IESLLLiveBizAttributeModel *bizModel;

- (void)configIconUrl:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
