@class NotifyMsgCallbackApi, NSString, BrandTimelineNotifyLogic, CContactVerifyLogic, NSMutableSet;

@interface FlutterBizTempPlugin : NSObject <contactInfoDelegate, contactVerifyLogicDelegate, BrandTimelineNotifyLogicDelegate, IContactMgrExt, MMFlutterPlugin, BizTempApi, NotifyMsgApi>

@property (retain, nonatomic) CContactVerifyLogic *m_oLogic;
@property (retain, nonatomic) NotifyMsgCallbackApi *notifyMsgCallback;
@property (retain, nonatomic) BrandTimelineNotifyLogic *notifyTipsLogic;
@property (retain, nonatomic) NSMutableSet *setFastLoadTemplateType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)onAttachedToViewController:(id)a0;
- (void)onDetachedToViewController;
- (id)getContactInfoUserName:(id)a0 error:(id *)a1;
- (id)getContactByUsername:(id)a0;
- (id)genContactInfoFromContact:(id)a0;
- (id)getNotificationTabInfoWithError:(id *)a0;
- (id)getNotifyMsgListScene:(long long)a0 buffer:(long long)a1 size:(long long)a2 error:(id *)a3;
- (id)convertMsgWrapToNotifyMsg:(id)a0;
- (void)setHasReadMsgIdList:(id)a0 isFoldUnread:(BOOL)a1 error:(id *)a2;
- (void)onItemClickMsg:(id)a0 error:(id *)a1;
- (id)onItemDeleteMsg:(id)a0 error:(id *)a1;
- (void)addContactUsername:(id)a0 error:(id *)a1;
- (id)getNotifyUnReadCountWithError:(id *)a0;
- (id)canUseStyleV2WhenMsgVersionMsgVersion:(long long)a0 error:(id *)a1;
- (void)addToPreloadUrl:(id)a0 itemShowType:(long long)a1 openScene:(long long)a2 brandUserName:(id)a3 completion:(id /* block */)a4;
- (void)onNotifyMsgBlockStatusChangedMpArticleKey:(id)a0 notifyMsgBlockFlag:(long long)a1 completion:(id /* block */)a2;
- (void)deleteAllMsgByContact:(id)a0;
- (void)onContactVerifyFail;
- (void)contactAddContactOk:(id)a0;
- (void)onNewNotification:(id)a0;
- (void)onNewBrandContact:(id)a0;
- (void).cxx_destruct;

@end
