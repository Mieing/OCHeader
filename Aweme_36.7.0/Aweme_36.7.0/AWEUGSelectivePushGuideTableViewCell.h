@class UIView, UILabel, AWEUGInnerPushExtraSelectionModel, DUXCheckBox;

@interface AWEUGSelectivePushGuideTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *leftTitleLabel;
@property (retain, nonatomic) AWEUGInnerPushExtraSelectionModel *model;
@property (retain, nonatomic) DUXCheckBox *checkBox;
@property (retain, nonatomic) UIView *seprateLine;

- (void)disabledAccessibilityElement:(id)a0;
- (void)p_changeToSelect:(BOOL)a0;
- (void)configWithModel:(id)a0 shouldDisplaySeprateLine:(BOOL)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
