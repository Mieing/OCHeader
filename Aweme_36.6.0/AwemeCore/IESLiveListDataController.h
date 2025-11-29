@class NSMutableArray;

@interface IESLiveListDataController : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableArray *dataSource;
@property (nonatomic) unsigned long long totalCount;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL isRequestOnAir;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
