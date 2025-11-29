@class DiscoverEntranceSettingConfig;
@protocol DiscoverEntranceSettingSheetViewDelegate;

@interface DiscoverEntranceSettingSheetView : MMAutoLayoutSheetView

@property (retain, nonatomic) DiscoverEntranceSettingConfig *config;
@property (weak, nonatomic) id<DiscoverEntranceSettingSheetViewDelegate> delegate;

- (id)initWithConfig:(id)a0;
- (void)onSwitchChanged:(id)a0;
- (void)pageSheetWillDisappear;
- (void)customArrangeViews;
- (void)showWithAnimated:(BOOL)a0;
- (void)appendIconView;
- (void)appendSwitchListViewWithInfos:(id)a0;
- (id)genSwitchViewWithInfo:(id)a0;
- (id)genEntrySwitchViewWithTitle:(id)a0 uiSwitch:(id)a1;
- (void)hideSubSwitchViewsWhenEntranceValueChanged:(BOOL)a0;
- (void).cxx_destruct;

@end
