@class NSString, NSMutableDictionary, IESECMallDeepFeedNode;

@interface IESECMallDeepFeedDataSource : IESECListDataController

@property (nonatomic) long long cursor;
@property (copy, nonatomic) NSString *postBack;
@property (nonatomic) long long pageNum;
@property (retain, nonatomic) NSMutableDictionary *mixedFeedRequestParams;
@property (retain, nonatomic) IESECMallDeepFeedNode *node;
@property (nonatomic) long long dataCount;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)fetchData:(id /* block */)a0;
- (void)insertPreloadFirstScreen:(id)a0;
- (id)getMixedFeedRequestParams;
- (void)replacePreloadCards:(id)a0;
- (void)insertPreloadFirstScreen:(id)a0 withCursor:(id)a1 postBack:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
