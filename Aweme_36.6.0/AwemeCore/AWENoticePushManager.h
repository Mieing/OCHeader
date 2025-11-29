@class NSArray, NSMutableDictionary, NSString;

@interface AWENoticePushManager : NSObject <AWELiveRoomMessage, AWEUserMessage>

@property (retain, nonatomic) NSMutableDictionary *sectionDict;
@property (nonatomic) BOOL isLive;
@property (nonatomic) BOOL shouldCollectingMessages;
@property (retain, nonatomic) NSArray *pushTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)handleBecomeActive;
- (void)handleResignActive;
- (void)audienceEnterLiveRoom;
- (void)audienceQuitAllRoom;
- (void)anchorStartLive;
- (void)anchorEndLive;
- (void)anchorEnterGuidePage;
- (void)anchorClickStart;
- (void)anchorLeaveGuidePage;
- (void)updatePushViewWithNoticePush:(id)a0;
- (void)handleNoticeInAppPushNotification:(id)a0;
- (BOOL)checkSceneValid:(long long)a0;
- (BOOL)isShakePushShowing;
- (BOOL)isChatPushShowing;
- (BOOL)isLivePushShowing;
- (void)handleShowPolymericMessagesNotification:(id)a0;
- (void)clearNoticeWithType:(long long)a0;
- (void)inAppNoticeUpdateCloseFriendsWidgetIfNeeded:(id)a0;
- (void)silentHandleInAppNoticeFromLongConnection:(id)a0;
- (void)p_getOfflineInteractNoticeInnerPushWithContext:(id)a0;
- (id)p_topPrioritySectionManager;
- (void)p_showTopPrioritySectionForInteract:(BOOL)a0;
- (void)clearAllSection;
- (void)clearAllSectionDeactivePeriod;
- (double)p_timeToShowInstantNotice;
- (void)p_getFromLongConnection:(id)a0;
- (double)p_timeToShowPolymericAfterLaunch;
- (void)p_addNoticeToSectionManager:(id)a0 longConnection:(BOOL)a1;
- (void)showInteractNoticePush:(id)a0;
- (void)showInteractNoticePushImmediately:(id)a0;
- (void)trackLivePushAbandon:(id)a0 withReason:(id)a1;
- (void)didShowNoticePush;
- (void)delayPerformWithBlock:(id /* block */)a0;
- (long long)bizTypeFromModel:(id)a0;
- (Class)contentClassFromModel:(id)a0;
- (BOOL)isNoticePushShowing;
- (BOOL)isInLive;
- (BOOL)isPushShowing;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
