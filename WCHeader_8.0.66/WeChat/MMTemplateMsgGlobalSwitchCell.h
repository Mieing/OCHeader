@class UILabel, UISwitch;
@protocol MMTemplateMsgGlobalSwitchCellDelegate;

@interface MMTemplateMsgGlobalSwitchCell : UITableViewCell {
    UILabel *_titleLabel;
    UISwitch *_ctrlSwitch;
}

@property (weak, nonatomic) id<MMTemplateMsgGlobalSwitchCellDelegate> delegate;

+ (double)cellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initTitleLabel;
- (void)initCtrlSwitch;
- (void)onCtrlSwitchChanged:(id)a0;
- (void)layoutSubviews;
- (void)updateTitle:(id)a0 ctrlSwitch:(BOOL)a1;
- (void).cxx_destruct;

@end
