@class NSString, NSArray;

@interface AWEPreviewStyleListContainerViewModel : AWEBaseListViewModel

@property (copy, nonatomic) NSString *viewName;
@property (retain, nonatomic) NSArray *styleList;

- (void)fetchListData;
- (void)loadMoreListData;
- (void)setupViewModel;
- (void).cxx_destruct;

@end
