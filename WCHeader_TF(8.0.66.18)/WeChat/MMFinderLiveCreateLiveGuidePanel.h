@class MMFinderLiveCreateLiveGuideConfirmView, WCFinderLiveStarterReporter, MMFinderLiveCreateLivePOIGuideView, NSString, MMFinderLiveCreateLiveGuideLogic, MMFinderLiveCreateLiveTopicGuideView, MMUILabel;
@protocol MMFinderLiveCreateLiveGuidePanelDelegate;

@interface MMFinderLiveCreateLiveGuidePanel : MMPageSheetBaseView <MMFinderLiveCreateLiveTopicGuideViewDelegate, MMFinderLiveCreateLivePOIGuideViewDelegate, MMFinderLiveCreateLiveGuideConfirmViewDelegate, WCTimelinePOIPickerViewControllerDelegate>

@property (retain, nonatomic) MMFinderLiveCreateLiveGuideLogic *guideLogic;
@property (retain, nonatomic) WCFinderLiveStarterReporter *reporter;
@property (retain, nonatomic) MMUILabel *titleView;
@property (retain, nonatomic) MMFinderLiveCreateLiveTopicGuideView *topicGuideView;
@property (retain, nonatomic) MMFinderLiveCreateLivePOIGuideView *poiGuideView;
@property (retain, nonatomic) MMFinderLiveCreateLiveGuideConfirmView *confirmView;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) BOOL needUpdateDelegateInfo;
@property (nonatomic) BOOL directStartLiveAfterPOISelected;
@property (nonatomic) BOOL pageSheetIsDisappearing;
@property (weak, nonatomic) id<MMFinderLiveCreateLiveGuidePanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCreateLiveGuideLogic:(id)a0;
- (void)initPageSheetConfig;
- (void)initDetailView;
- (void)initTitleView;
- (void)initTopicGuideView;
- (void)initPOIGuideView;
- (void)initConfirmView;
- (void)setupNotifications;
- (void)layoutSubviews;
- (void)layoutTitleView;
- (void)layoutTopicGuideViewIfNeeded;
- (void)layoutPOIGuideViewIfNeeded;
- (void)layoutConfirmView;
- (void)showWithAnimated:(BOOL)a0 resetStatus:(BOOL)a1;
- (unsigned long long)getSupportedOrientationMask;
- (void)updateConfirmViewState;
- (void)updateDetailViewHeightAfterLayout;
- (void)updateDelegateInfoBeforeDisappear;
- (void)routeToPOIPickerViewController;
- (id)createPOIPickerViewControllerStartLiveButton;
- (void)innerDismissAndStartLive;
- (void)configTitleViewBeforeAppear;
- (void)configTopicGuideViewBeforeAppear;
- (void)configPOIGuideViewBeforeAppear;
- (void)configConfirmViewBeforeAppear;
- (void)reportCreateLiveGuidePanelAction:(unsigned long long)a0;
- (void)pageSheetWillAppear;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidDisappear;
- (void)onKeyboardShowing:(id)a0;
- (void)onKeyboardHiding:(id)a0;
- (void)onTopicContentHeightDidChange;
- (void)onTopicContentValidStateDidChange:(BOOL)a0;
- (void)onPOIGuideViewTryShowPOIPickerView;
- (void)onPOIGuideViewHeightDidChange;
- (void)onPOIGuideViewBottomPOIItemClicked;
- (void)onPOIPickerFinished:(id)a0;
- (void)onConfirmViewStartLiveButtonClicked;
- (void)onConfirmViewCancelButtonClicked;
- (BOOL)isShowingKeyboard;
- (void).cxx_destruct;

@end
