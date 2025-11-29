@class NSMutableSet;
@protocol WCLogicMgrDelegate;

@interface WCLogicMgr : MMObject <PBMessageObserverDelegate> {
    NSMutableSet *setWorkingItems;
}

@property (weak, nonatomic) id<WCLogicMgrDelegate> m_delegate;

- (id)init;
- (void)dealloc;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (BOOL)requestForSnsObjectOpRequest:(id)a0;
- (BOOL)requestForSnsObjectOpRequest:(id)a0 context:(id)a1;
- (BOOL)responseForSnsObjectOpResponse:(id)a0 Event:(unsigned int)a1;
- (void)onOperation:(id)a0 Finished:(long long)a1 withResp:(id)a2 context:(id)a3;
- (void)onOperationDeleteObj:(id)a0 Finished:(long long)a1 withResp:(id)a2;
- (void)onOperationSetPrivacy:(id)a0 Finished:(long long)a1;
- (void)onOperationSetOpen:(id)a0 Finished:(long long)a1;
- (void)onOperationDeleteComment:(id)a0 finished:(long long)a1 context:(id)a2;
- (void)onOperationCancelLike:(id)a0 finished:(long long)a1 context:(id)a2;
- (void)onOperationBlockMention:(id)a0 Finished:(long long)a1;
- (void)onOperationModifyShareScope:(id)a0 Finished:(long long)a1;
- (void)setDataItemPrivate:(id)a0;
- (void)setDataItemPublic:(id)a0;
- (void)setDataItemHate:(id)a0;
- (void)deleteDataItem:(id)a0;
- (void)requestForSnsObjectDetailRequest:(id)a0 groupDetail:(BOOL)a1;
- (BOOL)responseForSnsObjectDetailResponse:(id)a0 Event:(unsigned int)a1;
- (void)updateDataItemDetail:(id)a0;
- (void)updateDataItemDetailWithGroupDetail:(id)a0;
- (BOOL)deleteCommentWithItemID:(id)a0 commentID:(id)a1 context:(id)a2;
- (BOOL)cancelLikeDataItem:(id)a0 context:(id)a1;
- (void)setDataItem:(id)a0 ignoreNotify:(BOOL)a1;
- (void)modifyDataItem:(id)a0 visibilityOp:(id)a1;
- (BOOL)setDataItemTogetherByRemovingCurrentUser:(id)a0;
- (void)onSetDataItemTogetherWithResponse:(id)a0 event:(unsigned int)a1;
- (BOOL)modifyDataItem:(id)a0 isStarred:(BOOL)a1;
- (void)onModifyDataItemStarStatusWithResponse:(id)a0 event:(unsigned int)a1;
- (void).cxx_destruct;

@end
