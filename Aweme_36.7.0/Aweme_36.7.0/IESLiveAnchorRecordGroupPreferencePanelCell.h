@class UIControl, IESLiveAnchorRecordGroupPreferencePanelCellItem, UISwitch, UILabel, UIButton;
@protocol IESLiveAnchorRecordGroupPreferencePanelCellDelegate;

@interface IESLiveAnchorRecordGroupPreferencePanelCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitlelabel;
@property (retain, nonatomic) UIButton *helpBtn;
@property (retain, nonatomic) UISwitch *switchView;
@property (retain, nonatomic) UIControl *controlView;
@property (retain, nonatomic) IESLiveAnchorRecordGroupPreferencePanelCellItem *item;
@property (weak, nonatomic) id<IESLiveAnchorRecordGroupPreferencePanelCellDelegate> delegate;

- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)toggleAction;

@end
