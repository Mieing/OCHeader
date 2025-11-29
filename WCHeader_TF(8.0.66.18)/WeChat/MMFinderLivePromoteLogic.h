@class WCFinderLiveBaseCgi, MMFinderLiveTaskId;

@interface MMFinderLivePromoteLogic : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) BOOL isFetching;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) WCFinderLiveBaseCgi *addPromoteCGI;
@property (retain, nonatomic) WCFinderLiveBaseCgi *sendPromoteCGI;

- (id)initWithTaskId:(id)a0;
- (BOOL)fetchPromoteList:(id /* block */)a0;
- (void)addPromoteItem:(id)a0 completion:(id /* block */)a1;
- (void)removePromoteItem:(id)a0 completion:(id /* block */)a1;
- (void)sendPromoteItem:(id)a0 completion:(id /* block */)a1;
- (void)cancelPromoteItem:(id)a0 completion:(id /* block */)a1;
- (void)onPromoteManageDidClose;
- (void).cxx_destruct;

@end
