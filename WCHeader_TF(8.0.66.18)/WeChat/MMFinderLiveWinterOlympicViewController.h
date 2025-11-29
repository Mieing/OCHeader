@class MMFinderLiveWinterOlympicOperationView, NSString, FinderLiveNoticeInfo, MMFinderLiveOlympicsReserveConfirmView, MMFinderLiveWinterOlympicView, WCUIAlertView, MMFinderLiveActivityTaskId, MMFinderLiveActivityTask;

@interface MMFinderLiveWinterOlympicViewController : MMFinderPivotLiveViewController <MMFinderLiveWinterOlympicLogicDelegate, MMFinderLiveWinterOlympicOperationViewDelegate, ForwardMessageLogicDelegate, RecentForwardScrollViewDelegate>

@property (readonly, nonatomic) MMFinderLiveActivityTask *activityTask;
@property (readonly, nonatomic) MMFinderLiveActivityTaskId *activityTaskId;
@property (readonly, nonatomic) MMFinderLiveWinterOlympicView *winterOlympicsLiveView;
@property (readonly, nonatomic) MMFinderLiveWinterOlympicOperationView *winterOlympicOperationView;
@property (retain, nonatomic) MMFinderLiveOlympicsReserveConfirmView *reserveConfirmView;
@property (retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo;
@property (retain, nonatomic) WCUIAlertView *currAlertView;
@property (readonly, nonatomic) BOOL shouldForcePortrait;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)fetchReserveInfo;
- (BOOL)showReserveConfirmView:(id /* block */)a0;
- (void)onShowAlertFromAppMsg:(id)a0;
- (void)onShowToastFromAppMsg:(id)a0;
- (void)initLiveLogic;
- (id)createOperationViewWithTaskId:(id)a0;
- (void)close;
- (void)superClose;
- (void)onKickedOut;
- (void)onShowErrorPage:(id)a0;
- (void)onShowForbidLiveViewWithError:(id)a0;
- (void)showPrivateJoinBlockView;
- (id)getPollingFetchRequestBufferModelForCmdIDUpdateBulletScreen;
- (void)onLiveTaskLandScapeEnabledChanged:(id)a0;
- (void)onLiveWinterOlympicLogicTorchInfoUpdated:(id)a0;
- (void)onMMFinderLiveWinterOlympicOperationViewCertViewClose:(id)a0;
- (void)onCertificateShowing;
- (void)onCertificateHidden;
- (void)onNetworkStatusChange:(unsigned int)a0;
- (void).cxx_destruct;

@end
