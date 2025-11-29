@protocol AWENavigationItemCellProtocol;

@interface AWELongPressPaneliPhoneAutoPlayViewModel : AWELongPressPanelBaseViewModel

@property (weak, nonatomic) id<AWENavigationItemCellProtocol> navigationItemCell;

+ (id)longPressPanelViewModel;

- (void)switchDidChange:(id)a0;
- (id)realReferString;
- (long long)feedAutoPlayStyle;
- (long long)feedAutoPlaySwitchStyle;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)needShowForScene:(unsigned long long)a0;
- (void)didUpdateCell:(id)a0;
- (void)setItemPosition:(long long)a0;
- (BOOL)isJXPadAutoPlayScene;
- (BOOL)canShowInPinchView;
- (void)updateNavigationItemCellWithAutoPlayState:(BOOL)a0;
- (BOOL)needShow;
- (void).cxx_destruct;

@end
