@class UISwitch, UILabel, CALayer, AWEIMMuteSettingsItem;
@protocol AWEIMMuteSettingsRowViewDelegate;

@interface AWEIMMuteSettingsRowView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UISwitch *switchView;
@property (retain, nonatomic) CALayer *line;
@property (weak, nonatomic) id<AWEIMMuteSettingsRowViewDelegate> delegate;
@property (retain, nonatomic) AWEIMMuteSettingsItem *item;

+ (id)viewWithTitle:(id)a0;
+ (id)viewWithItem:(id)a0;

- (void)__setupDefaultUI;
- (void)__handleSwitchViewDidChanged:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;
- (id)initWithItem:(id)a0;

@end
