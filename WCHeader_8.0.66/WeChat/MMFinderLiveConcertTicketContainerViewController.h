@class MMFinderLiveConcertTicketViewController, NSString, NSArray, UIView, MMFinderLiveConcertTicketViewControllerReportingContext, NSMutableDictionary, UIImageView, ConcertTicketInfo, MMFinderLiveConcertTicketFailureView, MMUIButton, UILabel;

@interface MMFinderLiveConcertTicketContainerViewController : MMCPUIViewController <MMFinderLiveConcertTicketViewControllerDelegate>

@property (copy, nonatomic) id /* block */ ticketFetchBlock;
@property (retain, nonatomic) ConcertTicketInfo *ticketModel;
@property (retain, nonatomic) NSArray *ticketStyleItems;
@property (nonatomic) unsigned long long currentStyleIndex;
@property (retain, nonatomic) NSString *selectedStyleResouceId;
@property (retain, nonatomic) MMFinderLiveConcertTicketViewController *currentTicketViewController;
@property (retain, nonatomic) NSMutableDictionary *readyTicketViewControllers;
@property (retain, nonatomic) NSMutableDictionary *loadingTicketViewControllers;
@property (retain, nonatomic) UIView *ticketContainerView;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) UIView *loadingContainerView;
@property (retain, nonatomic) UIImageView *loadingRingView;
@property (retain, nonatomic) UILabel *loadingLabelView;
@property (nonatomic) BOOL showingLoadingToast;
@property (retain, nonatomic) MMFinderLiveConcertTicketFailureView *failureView;
@property (nonatomic) unsigned long long displayState;
@property (nonatomic) unsigned long long sourceScene;
@property (retain, nonatomic) MMFinderLiveConcertTicketViewControllerReportingContext *reportingContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSourceScene:(unsigned long long)a0 reportingContext:(id)a1;
- (id)initWithLiveTaskId:(id)a0 sourceScene:(unsigned long long)a1 reportingContext:(id)a2;
- (id)initWithLiveNoticeId:(id)a0 activityId:(id)a1 sourceScene:(unsigned long long)a2 reportingContext:(id)a3;
- (id)initWithActivityId:(id)a0 objectId:(unsigned long long)a1 liveId:(unsigned long long)a2 ticketReceivingScene:(unsigned int)a3 sourceScene:(unsigned long long)a4 reportingContext:(id)a5;
- (void)dealloc;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePushOrPresent:(BOOL)a0;
- (void)viewWillBePoped:(BOOL)a0;
- (void)viewWillBeDismissed:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)onCloseButtonTapped;
- (void)onResigningActive;
- (void)onTicketViewControllerReadyForDisplay:(id)a0;
- (void)onTicketViewControllerLoadFailed:(id)a0;
- (void)onTicketViewControllerNextStyleRequested:(id)a0;
- (void)onTicketViewControllerSaveCurrentStyleRequested:(id)a0;
- (void)onTicketViewControllerExternalNavigationRequested:(id)a0;
- (id)onTicketViewControllerShareActionSheetHostingViewRequested:(id)a0;
- (BOOL)updateWithTicketModel:(id)a0;
- (void)showLoadingView;
- (void)startLoadingAnimation;
- (void)showFailurePrompt;
- (void)retryLoading;
- (void)loadTicketViewControllerForStyleItem:(id)a0 hasOtherStyles:(BOOL)a1 showLoadingToast:(BOOL)a2;
- (void)switchCurrentTicketViewControllerTo:(id)a0;
- (void)nextStyle;
- (id)currentStyle;
- (void)saveCurrentStyleSelection;
- (void).cxx_destruct;

@end
