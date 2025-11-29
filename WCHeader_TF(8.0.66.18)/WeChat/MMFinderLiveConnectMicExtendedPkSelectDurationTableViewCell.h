@class MMFinderLiveBattleDurationItem, UIImageView, UILabel, UIView;

@interface MMFinderLiveConnectMicExtendedPkSelectDurationTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIImageView *rightChevronView;
@property (retain, nonatomic) UIView *separatorBar;
@property (retain, nonatomic) MMFinderLiveBattleDurationItem *selectedDuration;

+ (id)reuseId;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateSeparatorBarHidden:(BOOL)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
