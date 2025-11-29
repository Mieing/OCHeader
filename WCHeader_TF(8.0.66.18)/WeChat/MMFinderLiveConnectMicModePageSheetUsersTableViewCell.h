@class NSString, UIImageView, UILabel, UIView;

@interface MMFinderLiveConnectMicModePageSheetUsersTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *bulletLabel;
@property (retain, nonatomic) UILabel *displayNameLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *checkIconView;
@property (retain, nonatomic) UIView *separatorBar;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL showBullet;

+ (id)reuseId;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
