@class NSArray;

@interface AWEFansListCategorySectionViewModel : AWEBaseListSectionViewModel

@property (retain, nonatomic) NSArray *categoryTypes;
@property (nonatomic) BOOL forceHidenFollowerCount;
@property (nonatomic) long long selectedCategory;

- (void)setupViewModel;
- (void)loadMoreSectionData;
- (BOOL)onlyShowCategoryAll;
- (void).cxx_destruct;

@end
