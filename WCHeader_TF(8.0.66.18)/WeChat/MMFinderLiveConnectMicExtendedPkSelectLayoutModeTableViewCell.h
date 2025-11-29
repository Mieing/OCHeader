@class UILabel, UIImageView;

@interface MMFinderLiveConnectMicExtendedPkSelectLayoutModeTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) UIImageView *rightChevronView;
@property (nonatomic) unsigned long long selectedLayoutMode;

+ (id)reuseId;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateRightLabelText;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
