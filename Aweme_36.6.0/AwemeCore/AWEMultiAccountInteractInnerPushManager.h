@class AWESBCMultiAccountPushModel, NSString;

@interface AWEMultiAccountInteractInnerPushManager : NSObject <AWELiveRoomMessage, AWEPushSBCProtocol>

@property (nonatomic) BOOL isLive;
@property (retain, nonatomic) AWESBCMultiAccountPushModel *savedPush;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)handleBecomeActive;
- (id)configWithModel:(id)a0;
- (void)audienceEnterLiveRoom;
- (void)audienceQuitAllRoom;
- (void)anchorStartLive;
- (void)anchorEndLive;
- (void)anchorEnterGuidePage;
- (void)anchorClickStart;
- (void)anchorLeaveGuidePage;
- (BOOL)pushSBCCouldHandleWithMsg:(id)a0 payload:(id)a1 businessType:(id)a2;
- (id)trackEnterFrom;
- (void)handleShowPolymericMessagesNotification:(id)a0;
- (void)showPush:(id)a0;
- (BOOL)shouldSaveTheLastMsg;
- (double)polymericMessagesDelayTime;
- (void)delay:(long long)a0 PerformWithBlock:(id /* block */)a1;
- (void)trackInnerPushEvent:(id)a0 trackID:(id)a1 model:(id)a2;
- (BOOL)canShowInteractInnerPushRightNow:(id)a0;
- (id)sbcSocialInteractionInAppPushType:(id)a0;
- (id)attributedTitle:(id)a0;
- (id)attributedContent:(id)a0;
- (id)subscripImage:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)handleTap:(id)a0;

@end
