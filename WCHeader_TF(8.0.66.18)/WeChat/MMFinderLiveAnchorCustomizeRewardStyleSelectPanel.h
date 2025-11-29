@class MMFinderLiveAnchorCustomizeRewardStyleSelectPanelTab, WCActionSheet, MMFinderLiveAnchorCustomizeRewardStyleSelectLogic, MMFinderLiveAnchorCustomizeRewardStyleSelectPanelOptionsView;

@interface MMFinderLiveAnchorCustomizeRewardStyleSelectPanel : UIView

@property (retain, nonatomic) MMFinderLiveAnchorCustomizeRewardStyleSelectLogic *logic;
@property (retain, nonatomic) WCActionSheet *chooseImageActionSheet;
@property (retain, nonatomic) MMFinderLiveAnchorCustomizeRewardStyleSelectPanelTab *styleSelectTab;
@property (retain, nonatomic) MMFinderLiveAnchorCustomizeRewardStyleSelectPanelOptionsView *optionsView;

- (id)initWithStyleSelectLogic:(id)a0;
- (void)initOptionsView;
- (void)initStyleSelectTab;
- (void)setupNotifications;
- (void)layoutSubviews;
- (void)refreshViewData;
- (void)checkIsNeedSelectImage;
- (void)onKeyboardShowing:(id)a0;
- (void)onKeyboardHiding:(id)a0;
- (void).cxx_destruct;

@end
