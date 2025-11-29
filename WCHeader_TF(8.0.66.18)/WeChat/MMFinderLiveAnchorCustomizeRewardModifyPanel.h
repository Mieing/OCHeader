@class UIView, NSObject, MMFinderLiveTaskId, MMFinderLiveAnchorCustomizeRewardStylePreviewView, MMFinderLiveAnchorCustomizeRewardNavBar, MMFinderLiveAnchorCustomizeRewardStyleSelectLogic, MMFinderLiveAnchorCustomizeRewardItem, MMFinderLiveAnchorCustomizeRewardStyleSelectPanel;
@protocol MMFinderLiveAnchorCustomizeRewardModifyPanelDelegate;

@interface MMFinderLiveAnchorCustomizeRewardModifyPanel : MMPageSheetBaseView <MMFinderLiveAnchorCustomizeRewardStyleSelectLogicDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMFinderLiveAnchorCustomizeRewardItem *rewardItem;
@property (retain, nonatomic) MMFinderLiveAnchorCustomizeRewardStyleSelectLogic *logic;
@property (retain, nonatomic) MMFinderLiveAnchorCustomizeRewardNavBar *navBar;
@property (retain, nonatomic) MMFinderLiveAnchorCustomizeRewardStylePreviewView *previewView;
@property (retain, nonatomic) MMFinderLiveAnchorCustomizeRewardStyleSelectPanel *styleSelectPanel;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) BOOL isShowing;
@property (weak, nonatomic) NSObject<MMFinderLiveAnchorCustomizeRewardModifyPanelDelegate> *delegate;

- (id)initWithTaskId:(id)a0 rewardItem:(id)a1;
- (void)initStyleSelectLogic;
- (void)initPageSheetConfig;
- (void)initDetailView;
- (void)initNavBar;
- (void)initPreviewView;
- (void)initStyleSelectPanel;
- (void)initBackgroundView;
- (void)setupNotifications;
- (void)layoutSubviews;
- (void)pageSheetDidDismiss;
- (void)pageSheetDidShow;
- (void)onAnchorCancelRewardChange;
- (void)onAnchorCommitRewardChange;
- (void)onKeyboardShowing:(id)a0;
- (void)onKeyboardHiding:(id)a0;
- (id)getViewForPresentingActionSheet;
- (id)getViewControllerForPresentingImagePicker;
- (void)onPreviewPagFileChanged;
- (void)onAnchorSelectedStyleResourceStartLoading;
- (void)onAnchorSelectedStyleResourceEndLoading;
- (void)onCommitAnchorCustomizeRewardStyleStart;
- (void)onCommitAnchorCustomizeRewardStyleEndWithErrorMsg:(id)a0 errorPage:(id)a1;
- (double)contentWidth;
- (double)contentHeight;
- (double)safeAreaTopMargin;
- (void).cxx_destruct;

@end
