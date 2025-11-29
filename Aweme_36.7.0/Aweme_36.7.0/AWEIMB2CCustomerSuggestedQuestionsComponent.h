@class AWEIMB2CBottomFloatingAndPanelViewController, NSArray, NSString;
@protocol AWEIMMessageListBottomFloatingInterface;

@interface AWEIMB2CCustomerSuggestedQuestionsComponent : AWEIMComponentBase <AWEIMB2CBottomFloatingAndPanelViewControllerDelegate, AWEIMSyncPriorityDispatchObjectProtocol, AWEIMInputVIewControllerAction, AWEIMInputActionBarAction, AWEIMEnterpriseQuickReplyInputActionBarAction, AWEIMB2CBottomFloatingAndPanelCellViewModelDelegate, IESIMSheetVCDelegate, AWEIMMessageListBackgroundAction, AWEIMInputActionBarDynamicConfigFetcherAction, AWEIMMessageListBottomFloatingViewProtocol>

@property (retain, nonatomic) AWEIMB2CBottomFloatingAndPanelViewController *unfoldedQuestionsBottomFloatingViewController;
@property (retain, nonatomic) AWEIMB2CBottomFloatingAndPanelViewController *foldedQuestionsPanelViewController;
@property (copy, nonatomic) NSArray *unfoldedQuetions;
@property (copy, nonatomic) NSArray *foldedQuetions;
@property (nonatomic) BOOL userHasInitiatedOtherActions;
@property (weak, nonatomic) id<AWEIMMessageListBottomFloatingInterface> bottomFloatingService;
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) BOOL firstFrameOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;
@property (nonatomic) BOOL showInFloatMode;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (void)sheetDidDismiss:(id)a0;
- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)messageListBackgroundImageDidUpdated:(id)a0;
- (id)viewToDisplayInBottomContainer;
- (BOOL)canShowBarWhenInputTypeChangedTo:(long long)a0;
- (void)sendBtnClicked;
- (void)companyMenuDisplayStatusDidChange:(BOOL)a0;
- (void)didSelectViewModel:(id)a0;
- (void)dismissBottomFloatingView;
- (BOOL)hasSetedBackgroundImage;
- (void)didClickOnCloseBtn;
- (void)didFetchEnterpriseQuickReplyInputActionBarWithActionBarConfig:(id)a0;
- (void)actionBarDidClickAction:(id)a0;
- (void)didFetchDynamicConfigWithResultConfig:(id)a0;
- (void)__chatBackgroundDidChangeNty:(id)a0;
- (id)__constructCellViewModelsFromResourceConfigs:(id)a0 scene:(unsigned long long)a1 style:(unsigned long long)a2;
- (void)__parseConfig:(id)a0;
- (void)__registerAndDispatchBottomFloatingView;
- (void)__dismissAndInvalidateBottomFloatingView;
- (void).cxx_destruct;
- (id)conversation;
- (id)hostViewController;

@end
