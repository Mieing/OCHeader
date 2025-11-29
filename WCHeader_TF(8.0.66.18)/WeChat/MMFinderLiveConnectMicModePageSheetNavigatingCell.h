@class NSString, UIImageView, UILabel, UIView;

@interface MMFinderLiveConnectMicModePageSheetNavigatingCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UIImageView *rightChevronView;
@property (retain, nonatomic) UIView *separatorBar;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *value;

+ (id)reuseId;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
