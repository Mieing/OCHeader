@class NSString;

@interface AWEFansListSearchBarSectionViewModel : AWEBaseListSectionViewModel

@property (copy, nonatomic) NSString *searchText;
@property (nonatomic) BOOL searching;
@property (nonatomic) BOOL tracked;

- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void).cxx_destruct;

@end
