@class IESECMallDeepFeedPrefetch, IESECMallDeepFeedViewController, IESECMallDeepFeedNode, NSMutableArray, IESECMallDeepFeedDataSource;

@interface IESECMallDeepFeedRequestManager : NSObject {
    IESECMallDeepFeedNode *_node;
}

@property (retain, nonatomic) IESECMallDeepFeedDataSource *dataSource;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL success;
@property (retain, nonatomic) IESECMallDeepFeedPrefetch *prefetch;
@property (copy, nonatomic) id /* block */ packCallback;
@property (copy, nonatomic) id /* block */ feedCallback;
@property (retain, nonatomic) NSMutableArray *callBackWaitingArray;
@property (weak, nonatomic) IESECMallDeepFeedViewController *containerVC;

- (void)registerRequestCompletedBlk:(id /* block */)a0 feedCallback:(id /* block */)a1;
- (void)initFetchWithPackCallback:(id /* block */)a0 feedCallback:(id /* block */)a1;
- (void)loadMoreWithCallback:(id /* block */)a0;
- (void)__initFeedDataIfNeeded;
- (id)transPreProductInfoWithOutflowDict:(id)a0;
- (void)getAddressData;
- (void)invokeBlockWithBlock:(id /* block */)a0 BlockName:(id)a1 isFullPageRefresh:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (id)data;

@end
