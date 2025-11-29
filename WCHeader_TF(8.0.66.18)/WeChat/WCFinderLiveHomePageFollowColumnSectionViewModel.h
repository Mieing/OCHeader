@interface WCFinderLiveHomePageFollowColumnSectionViewModel : WCFinderLiveHomePageSectionViewModel

- (id)initWithContainerModel:(id)a0 scene:(int)a1 ctx:(id)a2 isSkeleton:(BOOL)a3;
- (unsigned long long)totalUnFoldCount;
- (void)expandAction;
- (void)reportHeaderExpose;
- (BOOL)isSectionCustomHeaderShowIcon;

@end
