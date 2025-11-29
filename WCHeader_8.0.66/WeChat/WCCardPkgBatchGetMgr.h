@class WCCardPkgDB, NSMutableArray;
@protocol WCCardPkgBatchGetMgrDelegate;

@interface WCCardPkgBatchGetMgr : MMObject <PBMessageObserverDelegate> {
    WCCardPkgDB *_wcCardPkgDB;
    NSMutableArray *_batchGetArray;
}

@property (weak, nonatomic) id<WCCardPkgBatchGetMgrDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)initDB:(id)a0;
- (void)addBatchGetCardList:(id)a0;
- (void)tryStartBatchGet;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleBatchGetWCCardResp:(id)a0 Event:(unsigned int)a1;
- (void)handleBatchGetObjectList:(id)a0;
- (void)delFinishedCardIDFromBatchGetArray:(id)a0;
- (void).cxx_destruct;

@end
