@class UIImageView, UILabel, NSString;

@interface AWEIMAlbumListCell : UITableViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *numberLabel;
@property (copy, nonatomic) NSString *representedAssetIdentifier;

- (void)configWithModel:(id)a0;
- (void)addSubviews;
- (void)setUpFrames;
- (void)p_configWithAssets:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)commonInit;

@end
