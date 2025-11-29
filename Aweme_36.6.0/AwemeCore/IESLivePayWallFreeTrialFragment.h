@class IESLiveRightBottomMutuallyExclusiveItem, NSString, NSMutableArray, IESLivePayWallGuidePayView;

@interface IESLivePayWallFreeTrialFragment : IESLiveRoomComponent <HTSLiveStreamPlayerAction, IESLiveMessageInteractionModuleCommentAction, IESLivePaidStreamAction, IESLivePayWallFreeTrialRouter>

@property (retain, nonatomic) IESLivePayWallGuidePayView *payGuideView;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *rightBottomItem;
@property (copy, nonatomic) NSString *stateListenTag;
@property (copy, nonatomic) NSString *timeListenTag;
@property (nonatomic) BOOL isInRoom;
@property (nonatomic) BOOL ticketOver;
@property (nonatomic) BOOL preStream;
@property (nonatomic) BOOL unRefreshRoom;
@property (retain, nonatomic) NSMutableArray *subscriberList;
@property (retain, nonatomic) id notificationObserver;
@property (nonatomic) int currentPaidLiveType;
@property (nonatomic) double freeTrialStartTimeInterval;
@property (copy, nonatomic) NSString *freeTrialCurrentStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)componentOrientationChanged:(long long)a0;
- (BOOL)isUnPaiedUserInPayRoom;
- (id)commonParameters;
- (void)paidStreamTrialDidStart:(long long)a0;
- (void)paidStreamTrialDidStop:(long long)a0;
- (void)paidStreamDidEndDisplayGrabFreeView:(long long)a0;
- (void)paidStreamTrialDidInstall:(long long)a0 reason:(unsigned long long)a1;
- (void)paidStreamTrialDidFinish:(long long)a0 reason:(unsigned long long)a1;
- (void)paidStreamTrialDidPaid:(long long)a0;
- (id)getAdExtraParamaters;
- (void)installPayGuideView;
- (void)uninstallPayGuideView;
- (void)openPayGuideCardWithURLString:(id)a0 isAutoOpen:(BOOL)a1 paidLiveType:(int)a2;
- (void)unsubscribeEvent;
- (void)registerSubscribes;
- (void)paidStreamTrialRemainingTimeChangeTo:(double)a0 scene:(long long)a1;
- (void)paidStreamTrialDidPromised:(long long)a0;
- (void)paidStreamGrabFreeSucceed:(BOOL)a0 scene:(long long)a1;
- (void)onCameraDidChangeTo:(id)a0 source:(long long)a1;
- (void)openPayGuideCardAuto:(BOOL)a0 paidLiveType:(int)a1;
- (void)subscribeEventGrabTicket;
- (void)subscribeEventPanalClose;
- (void)subscribeEventOpenPaidPanel;
- (void)addGrabTicketView;
- (void)openInvestorWithUrl:(id)a0;
- (void)loadTicketPanel;
- (void)openShareTicketWithUrl:(id)a0 isFinished:(BOOL)a1;
- (void)openVIPTicketWithUrl:(id)a0 isFinished:(BOOL)a1;
- (void)trackBuyticketModuleClose;
- (void)freeTrialTimeIntervalTrackerWithDuration:(double)a0;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (void).cxx_destruct;
- (void)dealloc;

@end
