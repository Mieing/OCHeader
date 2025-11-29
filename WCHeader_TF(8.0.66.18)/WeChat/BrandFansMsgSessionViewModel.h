@class BrandFansMsgSessionStorage, BrandMsgNotification;
@protocol BrandFansMsgSessionViewModelDelegate;

@interface BrandFansMsgSessionViewModel : NSObject <BrandFansMsgSessionMgrExt>

@property (retain, nonatomic) BrandFansMsgSessionStorage *sessionStorage;
@property (retain, nonatomic) BrandMsgNotification *systemNotification;
@property (nonatomic) unsigned int systemNotificationCount;
@property (nonatomic) BOOL notifyEnable;
@property (weak, nonatomic) id<BrandFansMsgSessionViewModelDelegate> delegate;

- (id)initWithSessionStorage:(id)a0 systemNotification:(id)a1 notifyEnable:(BOOL)a2;
- (void)dealloc;
- (void)setup;
- (void)setupRedDotObservation;
- (id)brandSystemSessionData;
- (unsigned long long)msgSessionCount;
- (id)msgSessionCellViewModelAtIndex:(long long)a0;
- (void)deleteMsgSession:(id)a0;
- (void)didSelectFansMsgSessionAtIndex:(long long)a0;
- (void)didClickSettingItem;
- (void)onRedDotUpdatedWithData:(id)a0;
- (void)onBrandFansMsgSessionUpdatedForBizuin:(id)a0;
- (void)onBrandMsgNotificationUpdatedForBizuin:(id)a0 notification:(id)a1;
- (void)onBrandFansMsgNotifyEnableUpdatedForBizuin:(id)a0 enable:(BOOL)a1;
- (void).cxx_destruct;

@end
