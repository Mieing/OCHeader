@class IESLiveButton, NSString, UISwitch, UIImageView, UILabel, IESLiveGameInteractSettingCellItem, UIButton;

@interface IESLiveGameInteractSettingCell : UITableViewCell <UITextFieldDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *onOffSwitchTouchButton;
@property (retain, nonatomic) UISwitch *onOffSuperficialSwitch;
@property (retain, nonatomic) UIImageView *arrowImage;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) IESLiveButton *rightButton;
@property (retain, nonatomic) IESLiveGameInteractSettingCellItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindAction;
- (void)onOffSwitchChanged;
- (void)onRightButtonClicked;
- (id)getTextValueFromTextFieldCell;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)updateItem:(id)a0;

@end
