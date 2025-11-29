@class IamBizPersonalCenterManager, IamBizProfileNativeToCppManager, MMLRUCache, IamBizInteractiveNativeToCppManager, NSString, IamBizPersonalCenterRedDotManager;

@interface BizIamService : MMUserService <BrandFansMsgSessionMgrExt, MMServiceProtocol>

@property (retain, nonatomic) IamBizProfileNativeToCppManager *profileManager;
@property (retain, nonatomic) IamBizPersonalCenterManager *personalCenterManager;
@property (retain, nonatomic) IamBizPersonalCenterRedDotManager *personalCenterRedDotManager;
@property (retain, nonatomic) MMLRUCache *notifyUUIDCache;
@property (retain, nonatomic) IamBizInteractiveNativeToCppManager *interactiveManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)handleBizAppMsgRedDotNotifyData:(id)a0 uuid:(id)a1;
- (void)onRedDotInfoUpdated:(id)a0;
- (void)onBrandFansMsgUnreadCountUpdatedForBizuin:(id)a0 count:(unsigned long long)a1;
- (void).cxx_destruct;

@end
