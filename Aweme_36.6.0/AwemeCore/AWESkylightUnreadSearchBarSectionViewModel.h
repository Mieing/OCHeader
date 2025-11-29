@class NSString;

@interface AWESkylightUnreadSearchBarSectionViewModel : AWECommonUserListBaseSectionViewModel

@property (copy, nonatomic) NSString *searchText;
@property (nonatomic) BOOL searching;
@property (nonatomic) BOOL tracked;

- (id)enterFrom;
- (id)modelsArray;
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void).cxx_destruct;
- (id)previousPage;

@end
