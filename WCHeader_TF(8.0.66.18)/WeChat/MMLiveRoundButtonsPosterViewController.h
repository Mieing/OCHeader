@class UIView, NSString, NSArray, MMLiveVerticalTextButtonView, MMScrollActionSheet, MMFinderLiveTask, MMLivePostersFlipView, MMFinderLiveTaskId, ForwardMessageLogicController, MMLiveVerticalTextButtonViewConfig, UIColor;
@protocol MMLivePosterViewProviding, MMLivePosterReporting;

@interface MMLiveRoundButtonsPosterViewController : MMCPUIViewController <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, ForwardMessageLogicDelegate, WCCommitViewResultDelegate>

@property (retain, nonatomic) ForwardMessageLogicController *forwardLogic;
@property (retain, nonatomic) MMScrollActionSheet *scrollActionSheet;
@property (retain, nonatomic) MMLiveVerticalTextButtonViewConfig *portraitButtonConfig;
@property (retain, nonatomic) MMLiveVerticalTextButtonViewConfig *landscapeButtonConfig;
@property (retain, nonatomic) NSArray *posterViews;
@property (retain, nonatomic) MMLivePostersFlipView *containerView;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (readonly, nonatomic) UIColor *backdropColor;
@property (readonly, nonatomic) BOOL enableFavoriting;
@property (retain, nonatomic) MMLiveVerticalTextButtonView *cancelButton;
@property (retain, nonatomic) MMLiveVerticalTextButtonView *savePhotoButton;
@property (retain, nonatomic) MMLiveVerticalTextButtonView *shareButton;
@property (readonly, nonatomic) id<MMLivePosterReporting> reporter;
@property (readonly, nonatomic) UIView<MMLivePosterViewProviding> *currentPoster;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ portraitEnsuranceDelegationBlock;
@property (readonly, nonatomic) BOOL supportsLandscape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initView;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)willDisappear;
- (void)viewDidBePushOrPresent:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (id)createPosterViews;
- (void)onShareButtonClicked;
- (void)onSaveImageButtonClicked;
- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;
- (void)clickRFItemCallBack:(id)a0;
- (void)relayoutScrollSheet;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)onDoneForwardForForwardView:(id)a0;
- (void)onCancelForwardForForwardView:(id)a0;
- (void)forwardViewControllerDidCancel:(id)a0;
- (void)forwardViewController:(id)a0 didFinishForwardingWithDataItem:(id)a1;
- (BOOL)shouldHideNavigationBar;
- (void)tapToClose:(id)a0;
- (void)shareToChat:(id)a0;
- (void)shareToMoments;
- (void)addToFavorites;
- (void)layoutWithContainerViewAspectRatio:(double)a0;
- (void)layoutInPortraitWithContainerViewAspectRatio:(double)a0;
- (void)layoutInLandscapeWithContainerViewAspectRatio:(double)a0;
- (void)layoutWithUndefinedContainerViewAspectRatio;
- (void)layoutInPortraitWithUndefinedContainerViewAspectRatio;
- (void)layoutInLandscapeWithUndefinedContainerViewAspectRatio;
- (void)layoutForMultiplePosters;
- (void)updateButtonConfigForCurrentOrientation;
- (void).cxx_destruct;

@end
