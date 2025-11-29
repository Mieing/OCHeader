@class WADebugSkylineOptions, UISwitch, UILabel;

@interface WADebugSkylineViewCell : UITableViewCell {
    WADebugSkylineOptions *_options;
    long long _option;
    UISwitch *_switchView;
    UILabel *_labelView;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)config:(id)a0;
- (void)onOptionChanged:(id)a0;
- (void).cxx_destruct;

@end
