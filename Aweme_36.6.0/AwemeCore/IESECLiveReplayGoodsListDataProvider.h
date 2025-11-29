@class NSNumber, IESECLiveReplayGoodsListContext;
@protocol IESECHTTPRequestTask;

@interface IESECLiveReplayGoodsListDataProvider : NSObject

@property (retain, nonatomic) IESECLiveReplayGoodsListContext *context;
@property (retain, nonatomic) NSNumber *offset;
@property (weak, nonatomic) id<IESECHTTPRequestTask> currentRequestTask;
@property BOOL isRequesting;

- (void)fetchGoodsListWithParams:(id)a0 completion:(id /* block */)a1;
- (void)loadMoreGoodsListWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (BOOL)hasMore;
- (void)cancelCurrentRequest;

@end
