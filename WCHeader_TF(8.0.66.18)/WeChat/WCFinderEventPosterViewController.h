@class MMUIButton, WCFinderEventPosterViewModel, NSString, WCFinderEmptyTipsView, UIView, MMWebImageView, WCFinderEventHeaderView;
@protocol WCFinderEventPosterViewControllerDelegate;

@interface WCFinderEventPosterViewController : MMUIViewController <WCFinderEventHeaderViewDelegate, WCFinderEventDescriptionViewControllerDelegate, WCActionSheetDelegate, WCFinderEventPosterViewModelDelegate, WCFinderEmptyTipsViewDelegate, WCFinderFeedBaseViewControllerProtocol>

@property (retain, nonatomic) WCFinderEventPosterViewModel *viewModel;
@property (retain, nonatomic) WCFinderEmptyTipsView *emptyTipsView;
@property (retain, nonatomic) UIView *eventBackgroundContainer;
@property (retain, nonatomic) MMWebImageView *backgroundImageView;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) WCFinderEventHeaderView *headerView;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (weak, nonatomic) id<WCFinderEventPosterViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long actionType;
@property (copy, nonatomic) NSString *flowId;
@property (copy, nonatomic) NSString *visitId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEventTopicId:(unsigned long long)a0;
- (id)initWithEventInfo:(id)a0;
- (void)viewDidLoad;
- (void)updateUI;
- (void)updateActionButtonTitle;
- (BOOL)useTransparentNavibar;
- (void)genJoinButton;
- (void)genExitButton;
- (void)onClickBackItem;
- (void)actionButtonDidClick;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)finderEventInfoRefreshDidFinish:(BOOL)a0;
- (void)finderEmptyTipsView:(id)a0 didClickOnState:(unsigned long long)a1;
- (void)onEventHeaderClickAuthorInfoAction:(id)a0;
- (void)onEventHeaderClickDescriptionDetailAction:(id)a0;
- (void)showDescriptionJumpInfoSheet;
- (void)showDescriptionViewSheet;
- (void)onEventHeaderClickDescriptionContactAction:(id)a0;
- (void)onEventHeaderClickMiniAppEntranceAction:(id)a0;
- (void)finderEventDescriptionViewController:(id)a0 didClickUrl:(id)a1;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
