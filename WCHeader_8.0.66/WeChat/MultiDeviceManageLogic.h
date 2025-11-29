@class NSString;
@protocol MultiDeviceManageLogicDelegate;

@interface MultiDeviceManageLogic : NSObject <IOnlineClientMgrExt>

@property (weak, nonatomic) id<MultiDeviceManageLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)jumpToFileTransfer;
- (void)setMute:(BOOL)a0;
- (void)setLock:(BOOL)a0 withManageInfo:(id)a1;
- (void)startLogoutWithManageInfo:(id)a0 isUserOpen:(BOOL)a1;
- (void)jumpToHelpURLWithManageInfo:(id)a0;
- (void)onOnlineInfoUpdated;
- (void)onExtDeviceOnlineStatusChanged;
- (void)onLogoutWeb;
- (void)onLogoutWebFailed;
- (void).cxx_destruct;

@end
