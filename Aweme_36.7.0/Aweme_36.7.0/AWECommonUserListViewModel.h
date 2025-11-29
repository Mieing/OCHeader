@class AWECommonUserListBaseSectionViewModel;

@interface AWECommonUserListViewModel : AWEBaseListViewModel

@property (readonly, nonatomic) BOOL hasMore;
@property (retain, nonatomic) AWECommonUserListBaseSectionViewModel *listVM;
@property (nonatomic) BOOL hiddenMJFooter;

- (void)fetchListData;
- (void)loadMoreListData;
- (void)setupViewModel;
- (void)addBinding;
- (void).cxx_destruct;

@end
