@class CMessageWrap;
@protocol BrandTimelineNotifyLogicDelegate;

@interface BrandTimelineNotifyLogic : MMObject <BrandTimelineMsgMgrExt>

@property (weak, nonatomic) id<BrandTimelineNotifyLogicDelegate> delegate;
@property (readonly, nonatomic) unsigned int notifyCount;
@property (readonly, nonatomic) CMessageWrap *latestMsgWrap;
@property (readonly, nonatomic) long long creationCenterNotifyCount;

- (id)init;
- (void)innerUpdate;
- (void)notifyToSimulatedNativeCreationCenter:(long long)a0 buffer:(id)a1;
- (void)onNotificationUnreadCountChange;
- (void)onDelBrandTimelineMsgBySession:(id)a0;
- (void)onAddNotification:(id)a0;
- (void).cxx_destruct;

@end
