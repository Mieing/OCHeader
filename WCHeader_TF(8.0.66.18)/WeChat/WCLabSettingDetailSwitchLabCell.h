@class MMUILabel, UISwitch, UIView;

@interface WCLabSettingDetailSwitchLabCell : UITableViewCell {
    UIView *_topLineView;
    UIView *_bottomLineView;
    MMUILabel *_label;
}

@property (retain, nonatomic) UISwitch *labSwitch;

+ (double)height;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)configureWithLabItem:(id)a0;
- (void)initLines;
- (void)switchChanged:(id)a0;
- (void)initSwitch;
- (void)initLabel;
- (void).cxx_destruct;

@end
