@class NSString, ChatRoomHeadImageSyncLogic;

@interface ChatRoomHeadImageSyncMgr : MMUserService <MMKernelExt, MMServiceProtocol>

@property (retain, nonatomic) ChatRoomHeadImageSyncLogic *oChatRoomHeadImageSyncLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)initData;
- (void)onServiceClearData;
- (void)syncWithActionNotifyData:(id)a0;
- (void)onAuthOK;
- (void).cxx_destruct;

@end
