@class UILabel, UIImageView;

@interface MMFinderLiveConnectMicKtvSongListCellView : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *titleIcon;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *rightArrowIcon;

+ (id)ReuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configUI;
- (void)configTitleLabel;
- (void)configSubtitleLabel;
- (void)configTitleIcon;
- (void)configRightArrowIcon;
- (void)layoutUI;
- (void)updateWithSubtitle:(id)a0;
- (void).cxx_destruct;

@end
