@class NSString, UIImageView, UILabel, UIView;

@interface MMFinderLiveConnectMicExtendedPkSelectTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *checkboxView;
@property (retain, nonatomic) UIView *separatorBar;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL separatorBarHidden;

+ (id)reuseId;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
