@class MMLiveCountdownTipsView, NSString, FinderCreateLiveWarnPage, MMLiveTaskId, WCFinderStarterLiveViewModel;
@protocol MMFinderLiveSquareChatStartViewControllerDelegate;

@interface MMFinderLiveSquareChatStartViewController : MMUIViewController <MMLiveCountdownTipsViewDelegate, MMFinderCreateLiveSpamCheckWarnPageVCDelegate>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (weak, nonatomic) id<MMFinderLiveSquareChatStartViewControllerDelegate> delegate;
@property (retain, nonatomic) WCFinderStarterLiveViewModel *starterVM;
@property (retain, nonatomic) FinderCreateLiveWarnPage *warnPageNeedShowAfterCountDownTimeout;
@property (nonatomic) BOOL hasStarted;
@property (retain, nonatomic) MMLiveCountdownTipsView *countdownTipsView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 viewModel:(id)a1 shareItem:(id)a2 andLiveNoticeList:(id)a3 delegate:(id)a4;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)layoutUI;
- (void)startFinderLive;
- (void)startFinderLive:(BOOL)a0;
- (void)autofillDefaultDataWithCreateParamsModel:(id)a0 completion:(id /* block */)a1;
- (void)updateNoticeData;
- (void)updateCoverImageToDataItemWithImage:(id)a0;
- (BOOL)enableBindNoticeView;
- (void)closeAndExitLive;
- (void)markShowWarnPageAfterCountDownTimeout:(id)a0;
- (void)onMMLiveCountdownStart;
- (void)onMMLiveCountdownCancelled;
- (void)onMMLiveCountdownTimeOut;
- (void)cancelLiveAndUpdateData;
- (void)showLiveStarterWarnPage:(id)a0;
- (void)showWarnPage:(id)a0;
- (void)onMMLiveCreateLiveSpamCheckNameVerifySucceeded;
- (void)onMMLiveCreateLiveSpamCheckReturnPreparePage;
- (id)liveTask;
- (id)modeModel;
- (unsigned int)scene;
- (void).cxx_destruct;

@end
