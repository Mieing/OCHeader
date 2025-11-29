@class NSString, NSMutableSet;

@interface AWEPadPolymericInnerFeedDataController : AWEListDataController

@property (copy, nonatomic) NSString *pageKey;
@property (copy, nonatomic) NSString *sectionId;
@property (nonatomic) long long offset;
@property (retain, nonatomic) NSMutableSet *deduplicationSet;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)appendAwemeModels:(id)a0;
- (id)initWithPageKey:(id)a0 sectionId:(id)a1 awemeModels:(id)a2;
- (void)fetchFeedSectionDataWithOffset:(long long)a0 count:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;
- (void)setDataOffset:(long long)a0;

@end
