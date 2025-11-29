@class NSString, UISwitch, UILabel, UIView;
@protocol MMFinderLiveConnectMicModePageSheetSwitchCellDelegate;

@interface MMFinderLiveConnectMicModePageSheetSwitchCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UISwitch *toggleSwitch;
@property (retain, nonatomic) UIView *separatorBar;
@property (retain, nonatomic) NSString *title;
@property (weak, nonatomic) id<MMFinderLiveConnectMicModePageSheetSwitchCellDelegate> delegate;

+ (id)reuseId;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (void)onSwitchToggled;
- (void).cxx_destruct;

@end
