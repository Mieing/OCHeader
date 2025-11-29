@class NSDictionary, NSString, NSDate;

@interface AWEIMMessageTrackInteractor : AWEIMComponentBase <AWEIMMessageListDataAction, AWEIMMessageTrackInteractorInterface>

@property (nonatomic) long long sendSuccessCount;
@property (nonatomic) long long sendSuccessGifCount;
@property (nonatomic) long long sendSuccessCustomGifCount;
@property (nonatomic) long long sendSuccessTextCount;
@property (nonatomic) long long sendSuccessPicCount;
@property (nonatomic) long long sendSuccessAudioCount;
@property (nonatomic) long long sendSuccessGiphyCount;
@property (nonatomic) long long sendSuccessVideoCount;
@property (nonatomic) long long sendFailCount;
@property (nonatomic) long long sendFailGifCount;
@property (nonatomic) long long sendFailCustomGifCount;
@property (nonatomic) long long sendFailTextCount;
@property (nonatomic) long long sendFailPicCount;
@property (nonatomic) long long sendFailAudioCount;
@property (nonatomic) long long sendFailGiphyCount;
@property (nonatomic) long long sendFailVideoCount;
@property (retain, nonatomic) NSDate *startTime;
@property (copy) NSDictionary *trackingParams;
@property (nonatomic) BOOL hasTrackEventEnterChatAfter;
@property (nonatomic) BOOL firstFrameOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)didUpdatedConversation:(id)a0 messageId:(id)a1 error:(id)a2;
- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewWillAppear;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)didReceiveSendMessageResponse:(id)a0 message:(id)a1 result:(BOOL)a2;
- (void)appDidEnterBackgroundNotification:(id)a0;
- (void)backButtonClick;
- (id)vcParent;
- (void)updateTrackingParamsEntries:(id)a0;
- (void)didReceiveSendMessageResponse:(id)a0 result:(BOOL)a1;
- (void)cellBubbleViewTapped:(id)a0;
- (void)trackEventEnterChatAfterConversation:(id)a0 nonFriendActiveInfo:(id)a1 enterFrom:(id)a2;
- (void)trackStrangerEventIfNeedWithParams;
- (void)appDidEnterFrontgroundNotification:(id)a0;
- (void)handleSendAttachmentMsgUploadFailedNty:(id)a0;
- (void)__setStrangerSecondPreviousPageTracker;
- (void)__cleanStrangerSecondPreviousPageTracker;
- (void)p_trackChatStats;
- (void)p_trackStrangerStats;
- (id)p_logStringWithSuccessCount:(long long)a0 failed:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
