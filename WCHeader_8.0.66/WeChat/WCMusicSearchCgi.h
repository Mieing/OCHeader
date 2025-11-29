@class NSMutableArray;

@interface WCMusicSearchCgi : WCBaseCgi

@property (nonatomic) int batchCount;
@property (nonatomic) long long minBatchSize;
@property (retain, nonatomic) NSMutableArray *batchMusicList;
@property (copy, nonatomic) id /* block */ resultBlock;

- (id)initWithScene:(unsigned long long)a0 searchKey:(id)a1 requestBuffer:(id)a2 minBatchSize:(long long)a3 resultBlock:(id /* block */)a4;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
