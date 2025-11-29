@class UISwitch, UIView, UILabel, MMLiveGenerateReplaySettingSwitchItem;
@protocol MMLiveGenerateReplaySettingSwitchCellDelegate;

@interface MMLiveGenerateReplaySettingSubSwitchCellView : UITableViewCell

@property (retain, nonatomic) MMLiveGenerateReplaySettingSwitchItem *settingSwitchItem;
@property (retain, nonatomic) UIView *topSeparatorLine;
@property (retain, nonatomic) UIView *leftShortLine;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UISwitch *functionSwitch;
@property (weak, nonatomic) id<MMLiveGenerateReplaySettingSwitchCellDelegate> actionDelegate;

+ (id)ReuseIdentifier;
+ (double)calculateHeightForText:(id)a0 cellWidth:(double)a1;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configUI;
- (void)layoutUI;
- (void)configCellWithItem:(id)a0;
- (void)onFunctionSwitchValueChanged:(id)a0;
- (void).cxx_destruct;

@end
