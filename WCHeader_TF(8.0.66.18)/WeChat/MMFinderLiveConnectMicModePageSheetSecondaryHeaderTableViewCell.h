@class UILabel, NSString, UIView;

@interface MMFinderLiveConnectMicModePageSheetSecondaryHeaderTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UIView *separatorBar;
@property (retain, nonatomic) NSString *title;

+ (id)reuseId;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
