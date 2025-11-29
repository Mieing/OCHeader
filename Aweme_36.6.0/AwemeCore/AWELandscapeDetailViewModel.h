@interface AWELandscapeDetailViewModel : AWEBaseListViewModel

@property (nonatomic) BOOL isExpanded;

- (void)fetchListData;
- (void)loadMoreListData;
- (void)updateWithModel:(id)a0 dataController:(id)a1;
- (id)buildRelatedSectionWithModel:(id)a0 dataController:(id)a1;

@end
