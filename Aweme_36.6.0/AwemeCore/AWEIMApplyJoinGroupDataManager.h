@class NSArray, NSString;

@interface AWEIMApplyJoinGroupDataManager : NSObject <AWEIMApplyJoinGroupDataManagerInterface, IESIMApplyJoinGroupDataManagerProtocol>

@property (nonatomic) BOOL hasMoreData;
@property (retain, nonatomic) NSArray *dataList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)getMessageNoticeConsume:(id)a0;
+ (void)setMessageNoticeConsume:(unsigned long long)a0 uniqueId:(id)a1;
+ (id)sharedInstance;

- (void)setConUnreadApplyCount:(unsigned long long)a0 uniqueId:(id)a1;
- (unsigned long long)getConUnreadApplyCount:(id)a0;
- (void)setUnreadApplyConsume:(BOOL)a0 uniqueId:(id)a1;
- (BOOL)getUnreadApplyConsume:(id)a0;
- (void)didReceiveJoinGroupApplyNoticeWithChatModel:(id)a0;
- (void)fetchNewestAuditListWithLimit:(int)a0 completion:(id /* block */)a1;
- (void)fetchNewestAuditListWithConShortId:(long long)a0 limit:(int)a1 completion:(id /* block */)a2;
- (void)loadMoreAuditListWithLimit:(int)a0 completion:(id /* block */)a1;
- (void)loadMoreAuditListWithConShortId:(long long)a0 limit:(int)a1 completion:(id /* block */)a2;
- (void)ackConversationApplyWithApplyID:(long long)a0 agree:(BOOL)a1 bizExt:(id)a2 completion:(id /* block */)a3;
- (id)auditManager;
- (void)fetchBatchApplyUnreadCountWith:(id)a0 completion:(id /* block */)a1;
- (long long)findIndexOfApply:(id)a0;
- (void)removeApplyFromDataListAtIndex:(long long)a0;
- (id)firstApplyModel;
- (void).cxx_destruct;
- (id)init;

@end
