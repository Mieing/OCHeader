@class NSTimer, NSString, AWEFormatPostMessagePostApi, AWEFormatPostMessagePollApi, AWEFormatPostMessagePollResponse, NSDictionary, DUXLoadingToast, AWEFormatPostMsgFullScreenLoadingView;

@interface AWEFormatPostMsgComponent : AWEIMComponentBase <DUXLoadingToastDelegate, AWEFormatPostMsgFullScreenLoadingViewDelegate, AWEFormatPostMsgInterface>

@property (retain, nonatomic) DUXLoadingToast *loadingToast;
@property (nonatomic) long long publishId;
@property (retain, nonatomic) NSTimer *pollTimer;
@property (nonatomic) BOOL isPolling;
@property (nonatomic) double pollStartTime;
@property (retain, nonatomic) AWEFormatPostMessagePollApi *pollApi;
@property (retain, nonatomic) AWEFormatPostMessagePostApi *postApi;
@property (copy, nonatomic) NSDictionary *config;
@property (retain, nonatomic) AWEFormatPostMsgFullScreenLoadingView *loadingView;
@property (nonatomic) BOOL loadingOpt;
@property (nonatomic) BOOL needRecoverDisableNavigationbarBringToFront;
@property (nonatomic) BOOL didLoadBgImage;
@property (retain, nonatomic) AWEFormatPostMessagePollResponse *currentResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)DUXLoadingToastDidClosed:(id)a0;
- (void)hostVC_viewDidDisappear;
- (void)componentDidMounted:(id)a0;
- (void)postMessages:(id)a0;
- (void)p_reset;
- (BOOL)p_supportMessage:(id)a0;
- (id)p_reqParamsWithMessages:(id)a0;
- (void)showFullScreenLoadingWithResponse:(id)a0;
- (void)p_startPollingIfCan;
- (void)p_failWithLogReason:(id)a0;
- (void)p_pollCurrentPublishTask;
- (void)updateFullScreenLoadingWithResponse:(id)a0;
- (void)p_enterEditPageWithResponse:(id)a0;
- (void)trackLoadingWithEvent:(id)a0;
- (void)trackLoadingWithEvent:(id)a0 extra:(id)a1;
- (void)p_toastWithText:(id)a0;
- (void)formatPostMsgFullScreenLoadingViewDidClickClose:(id)a0;
- (void)formatPostMsgFullScreenLoadingViewDidClickBack:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)hideProgress;
- (void)showProgress;

@end
