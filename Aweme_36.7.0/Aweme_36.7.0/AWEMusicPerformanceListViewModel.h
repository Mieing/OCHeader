@class NSString;

@interface AWEMusicPerformanceListViewModel : AWEBaseListViewModel

@property (copy, nonatomic) NSString *cursor;
@property (copy, nonatomic) NSString *userId;

- (void)fetchListData;
- (void)loadMoreListData;
- (void)createSectionViewModelsWithList:(id)a0;
- (void)appendList:(id)a0;
- (void).cxx_destruct;

@end
