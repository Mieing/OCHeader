@class DUXSwitch, DUXButton, UIView;
@protocol AWENavigationItemCellProtocol;

@interface AWELongPressPanelDanmakuViewModel : AWELongPressPanelBaseViewModel

@property (retain, nonatomic) UIView *switchSettingContainerView;
@property (retain, nonatomic) DUXSwitch *switchView;
@property (retain, nonatomic) DUXButton *settingView;
@property (weak, nonatomic) id<AWENavigationItemCellProtocol> navigationItemCell;

+ (Class)aAWEPadModuleAdapterClass;
+ (BOOL)shouldShowDanmakuWithAwemeModel:(id)a0 referString:(id)a1 enterFrom:(id)a2;
+ (Class)aAWEPlayInteractionAdapterClass;
+ (id)longPressPanelViewModel;

- (id)aAWEPadModuleAdapter;
- (void)switchDidChange:(id)a0;
- (id)aAWEPlayInteractionAdapter;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)needShowForScene:(unsigned long long)a0;
- (void)didUpdateCell:(id)a0;
- (void)setItemPosition:(long long)a0;
- (void)configVMUseNewStyle;
- (void)updateNavigationItemCellWithDanmakuState:(BOOL)a0;
- (void)updateContainerSubViewIfNeed;
- (BOOL)needShow;
- (void).cxx_destruct;

@end
