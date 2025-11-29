@class NSString;

@interface BETempNotiMgr : MMUserService <IMsgExt, MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)dataListFrom:(long long)a0 limit:(unsigned int)a1 hasMore:(BOOL *)a2;
- (id)laterDataListFrom:(long long)a0 limit:(unsigned int)a1 hasMore:(BOOL *)a2;
- (id)getMsgByLocalId:(long long)a0;
- (BOOL)deleteMsgByLocalId:(long long)a0;
- (void)onBatchReadFromLocalId:(long long)a0;
- (unsigned long long)getTotalUnreadCount;
- (id)GetFirstUnReadMessage;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)updateBSContact:(id)a0;

@end
