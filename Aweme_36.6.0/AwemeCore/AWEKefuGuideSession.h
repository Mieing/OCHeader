@class AWEKefuGuideSessionConfig, AWEKefuBridgeEventPublisher, NSArray, AWEKefuRTCConnectManager, AWEKefuRTCMessageDispatcher, AWEKefuRTCMessageListener, NSString, AWEKefuGuideTaskManager, NSMutableArray, UIViewController, NSTimer, NSDate;

@interface AWEKefuGuideSession : NSObject <AWEKefuRTCConnectManagerDelegate>

@property (retain, nonatomic) AWEKefuGuideSessionConfig *config;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) AWEKefuBridgeEventPublisher *eventPublisher;
@property (retain, nonatomic) NSArray *signalListeners;
@property (retain, nonatomic) AWEKefuRTCConnectManager *connectManager;
@property (retain, nonatomic) AWEKefuGuideTaskManager *taskManager;
@property (retain, nonatomic) AWEKefuRTCMessageDispatcher *messageDispatcher;
@property (retain, nonatomic) AWEKefuRTCMessageListener *guideMessageListener;
@property (nonatomic) long long touchCount;
@property (weak, nonatomic) UIViewController *currentViewController;
@property (weak, nonatomic) NSString *currentViewControllerName;
@property (retain, nonatomic) NSMutableArray *sendSEIActionTypeList;
@property (nonatomic) BOOL isSendingSEIMessage;
@property (nonatomic) long long actionId;
@property (retain, nonatomic) NSTimer *autoCloseTimer;
@property (retain, nonatomic) NSDate *autoCloseDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_startGuide;
- (void)p_closeGuide;
- (void)p_sendGuideClosedEventWithReason:(id)a0;
- (BOOL)p_receiveVisualGuide:(id)a0 errorMessage:(id *)a1;
- (id)p_generateSignalListeners;
- (void)p_setupPageSignal;
- (void)p_trySendSEIMessage;
- (void)p_tryStartAutoCloseTimer;
- (void)p_tryCloseAutoCloseTimer;
- (void)p_updateAutoCloseTime;
- (void)p_onPageChangeSignal;
- (void)p_sendGuideShowEvent;
- (void)p_sendGuideDismissEventWithInfo:(id)a0;
- (void)p_sendSEIMessage;
- (BOOL)p_sendSEIMessageWithErrorMessage:(id *)a0;
- (void)p_sendPageChangeEventWithOldPageName:(id)a0 newPageName:(id)a1;
- (id)getGuideInfo;
- (void)p_onAutoCloseFire:(id)a0;
- (void)closeGuideWithReason:(id)a0 completion:(id /* block */)a1;
- (BOOL)onReceiveRTCMessage:(id)a0 errorMessage:(id *)a1;
- (void)onRTCConnectClosed;
- (long long)getActionId;
- (void)startGuideCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
