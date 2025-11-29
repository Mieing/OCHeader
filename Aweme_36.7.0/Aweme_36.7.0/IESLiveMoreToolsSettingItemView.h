@class IESLiveMoreToolsSettingItem, UISwitch, UIImageView, UILabel, UIView, UIButton;

@interface IESLiveMoreToolsSettingItemView : UIView

@property (nonatomic) BOOL on;
@property (copy, nonatomic) id /* block */ switchBlock;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *contentContainer;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UISwitch *switchItem;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (nonatomic) BOOL useStandardPanel;
@property (retain, nonatomic) IESLiveMoreToolsSettingItem *item;

- (void)updateTitle:(id)a0 content:(id)a1;
- (void)buildViewWithSettingItem:(id)a0;
- (void)tapNotesIcon;
- (void)buttonTap;
- (void)switchDidTap;
- (void)buildItemContent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 settingItem:(id)a1;
- (void).cxx_destruct;

@end
