@class NSMutableArray;
@protocol WCShareCardBatchGetMgrDelegate;

@interface WCShareCardBatchGetMgr : MMObject <PBMessageObserverDelegate> {
    NSMutableArray *_waitArray;
    NSMutableArray *_gettingArray;
    BOOL _bGetting;
    unsigned int _batchGetFailCount;
    unsigned int _curBatchGetMinUpdateTime;
}

@property (weak, nonatomic) id<WCShareCardBatchGetMgrDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)addBatchGetShareCardList:(id)a0;
- (void)tryStartBatchGet;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleBatchGetShareCardListResp:(id)a0;
- (void)handleBatchGetFail;
- (void)handleBatchGetObjectList:(id)a0;
- (void).cxx_destruct;

@end
