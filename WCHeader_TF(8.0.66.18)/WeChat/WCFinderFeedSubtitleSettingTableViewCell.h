@class UIFont, UIImageView, UILabel, UIView;

@interface WCFinderFeedSubtitleSettingTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *checkImageView;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) BOOL disableCheckMark;
@property (nonatomic) BOOL hiddenSeparator;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateWithText:(id)a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)updateLayout;
- (void).cxx_destruct;

@end
