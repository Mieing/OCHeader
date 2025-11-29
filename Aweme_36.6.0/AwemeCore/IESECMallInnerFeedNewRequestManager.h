@class IESECMallInnerFeedNode, IESECMallInnerFeedPrefetch, IESECMallInnerFeedNewDataSource;

@interface IESECMallInnerFeedNewRequestManager : NSObject {
    IESECMallInnerFeedNode *_node;
}

@property (retain, nonatomic) IESECMallInnerFeedNewDataSource *dataSource;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL success;
@property (weak, nonatomic) IESECMallInnerFeedPrefetch *prefetch;

- (void)initFetchWithPackCallback:(id /* block */)a0 feedCallback:(id /* block */)a1;
- (void)loadMoreWithCallback:(id /* block */)a0;
- (void)__initFeedDataIfNeeded;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (id)data;

@end
