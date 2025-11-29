@class UILabel, UISwitch, UIView;
@protocol MMFinderLiveConnectMicExtendedPkSelectAnchorParticipatingTableViewCellDelegate;

@interface MMFinderLiveConnectMicExtendedPkSelectAnchorParticipatingTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *bulletLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UISwitch *toggleSwitch;
@property (retain, nonatomic) UIView *separatorBar;
@property (nonatomic) BOOL separatorBarHidden;
@property (weak, nonatomic) id<MMFinderLiveConnectMicExtendedPkSelectAnchorParticipatingTableViewCellDelegate> delegate;

+ (id)reuseId;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (void)onSwitchToggled;
- (void).cxx_destruct;

@end
