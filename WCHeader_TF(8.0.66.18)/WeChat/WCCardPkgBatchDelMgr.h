@class WCCardPkgDB, NSMutableArray;
@protocol WCCardPkgBatchDelMgrDelegate;

@interface WCCardPkgBatchDelMgr : MMObject <PBMessageObserverDelegate> {
    WCCardPkgDB *_wccardPkgDB;
    NSMutableArray *_batchDelArray;
}

@property (weak, nonatomic) id<WCCardPkgBatchDelMgrDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)initDB:(id)a0;
- (void)addBatchDelWCCardList:(id)a0;
- (void)tryStartBatchDel;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleBatchDelWCCardResp:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
