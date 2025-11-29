@class UILabel, UISwitch, MMLiveGenerateReplaySettingSwitchItem;
@protocol MMLiveGenerateReplaySettingSwitchCellDelegate;

@interface MMLiveGenerateReplaySettingMainSwitchCellView : UITableViewCell

@property (retain, nonatomic) MMLiveGenerateReplaySettingSwitchItem *settingSwitchItem;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UISwitch *functionSwitch;
@property (weak, nonatomic) id<MMLiveGenerateReplaySettingSwitchCellDelegate> actionDelegate;

+ (id)ReuseIdentifier;
+ (double)calculateHeightForText:(id)a0 descText:(id)a1 cellWidth:(double)a2;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configUI;
- (void)layoutUI;
- (void)configCellWithItem:(id)a0;
- (void)onFunctionSwitchValueChanged:(id)a0;
- (void).cxx_destruct;

@end
