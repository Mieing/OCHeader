@class WCStoryDataItem;

@interface WCStoryPostDeleteCgiObj : WCStoryBaseCGIObj

@property (retain, nonatomic) WCStoryDataItem *dataItem;
@property (copy, nonatomic) id /* block */ deletePostBlock;
@property (copy, nonatomic) id /* block */ dbSyncBlock;

- (id)initWithDataItem:(id)a0;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
