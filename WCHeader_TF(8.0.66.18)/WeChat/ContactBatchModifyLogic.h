@class NSMutableArray, NSMutableDictionary;
@protocol ContactBatchModifyLogicDelegate;

@interface ContactBatchModifyLogic : MMObject <PBMessageObserverDelegate> {
    NSMutableArray *m_arrBatchModifyRequest;
    NSMutableArray *m_arrFailBatchModifyInfo;
    NSMutableDictionary *m_dicFailBatchModifyRetry;
    unsigned int m_eventID;
    NSMutableArray *m_arrBatchSnsNointerestingModify;
    NSMutableArray *m_arrBatchSnsNointerestingModifyOnceNumber;
    NSMutableArray *m_arrFailBatchSnsNointerestingModify;
    BOOL m_isAddBatchSnsNointeresting;
}

@property (weak, nonatomic) id<ContactBatchModifyLogicDelegate> m_delegate;

- (unsigned long long)getMaxBatchOnceNumber;
- (void)dealloc;
- (void)clearAllData;
- (void)batchModContactTypeWithAddContantctAr:(id)a0 deleteContantctAr:(id)a1 modContactType:(unsigned int)a2;
- (void)CheckQueue;
- (void)HandleModContactResponse:(id)a0;
- (void)HandleAllFailModContact:(id)a0;
- (void)HandleCurrentFailModContact:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (BOOL)BatchModContactTypeNetWork:(id)a0;
- (void)OnBatchModContactTypeResponse:(id)a0;
- (void)batchModContactSnsNointerestingTypeWithContantctAr:(id)a0 isBatchAdd:(BOOL)a1;
- (void)CheckSnsNointerestingTypeQueue;
- (void)BatchModContactSnsNointerestingTypeNetWork:(id)a0;
- (void)onWCGroupAddMemberReturn:(BOOL)a0 group:(id)a1;
- (void)onWCGroupRemoveMemberReturn:(BOOL)a0 group:(id)a1;
- (void)handleSnsNointerestingResponse:(BOOL)a0;
- (void).cxx_destruct;

@end
