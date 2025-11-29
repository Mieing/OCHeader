@class AWEIMLiveGroupAnnouncementLiveStatusResponse, AWEIMLiveGroupAnnouncementMessage;

@interface AWEIMLiveGroupAnnouncementComponent : AWEIMFlexComponent

@property (nonatomic) BOOL isRequesting;
@property (nonatomic) long long roomId;
@property (nonatomic) long long announcementId;
@property (retain, nonatomic) AWEIMLiveGroupAnnouncementMessage *message;
@property (retain, nonatomic) AWEIMLiveGroupAnnouncementLiveStatusResponse *displayingStatusResponse;

+ (struct CGSize { double x0; double x1; })bubbleSize:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_createPresenterIfNeed;
- (void)p_trackShowData;
- (void)p_initUIProps;
- (void)p_resetStatus;
- (void)p_handleDidUpdateSubscribeStatusNty:(id)a0;
- (BOOL)p_shouldFetchStatusWithScheduleTimeInLongLong:(long long)a0;
- (void)p_updateWithStatus:(unsigned long long)a0 subscribeInfo:(id)a1 roomId:(long long)a2;
- (void)p_updateColorsWithStatus:(unsigned long long)a0;
- (BOOL)p_hasFetchedInThisConversation;
- (void)p_fetchMessageLiveStatusWithMessage:(id)a0 iesMsg:(id)a1;
- (void)p_didTapOnBubble;
- (void)p_didTapOnSubscribeBtn;
- (id)p_interactor;
- (void)p_updateContentWithStatus:(unsigned long long)a0 subscribeInfo:(id)a1 roomId:(long long)a2;
- (id)p_displaySubscribeListFromFullSubscribeList:(id)a0;
- (void)p_updateSubscribeButtonWithHasSubscribe:(BOOL)a0 announcementId:(long long)a1;
- (void)p_updateDisplayingResponseToAlreadySubscribed;
- (void)p_updateDisplayingResponseToCanSubscribe;
- (void)p_updateStatusAccordingToDisplayingResponse;
- (void)p_changeSubscribStatusTo:(BOOL)a0;
- (BOOL)p_shouldDisableInteraction;
- (void)p_trackLiveAnnouncementMessageEvent:(id)a0;
- (void)p_transferToLive;
- (id)p_showTypeForTracking;
- (void).cxx_destruct;
- (void)dealloc;

@end
