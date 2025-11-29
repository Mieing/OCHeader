@class UILabel, ACCStickerPannelUIConfig;

@interface AWEVideoEditStickerCollectionViewHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) ACCStickerPannelUIConfig *uiConfig;

+ (id)identifier;

- (void).cxx_destruct;
- (void)setupTitleLabel;
- (void)updateWithTitle:(id)a0;

@end
