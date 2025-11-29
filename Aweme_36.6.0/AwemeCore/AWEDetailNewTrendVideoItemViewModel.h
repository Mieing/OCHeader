@class AWEDetailNewTrendVideoItemSectionViewModel, AWEDetailNewTrendVideoItemDataContext, AWEDetailNewTrendVideoItemTracker;

@interface AWEDetailNewTrendVideoItemViewModel : AWEBaseListViewModel

@property (retain, nonatomic) AWEDetailNewTrendVideoItemDataContext *dataContext;
@property (retain, nonatomic) AWEDetailNewTrendVideoItemTracker *tracker;
@property (retain, nonatomic) AWEDetailNewTrendVideoItemSectionViewModel *sectionViewModel;

- (void)setupViewModel;
- (id)sectionViewModels;
- (void)configUIWithModels:(id)a0;
- (BOOL)isEqualVideoCellSkeletonMode:(id)a0;
- (BOOL)isEqualVideoCellCoverPhotoUrls:(id)a0;
- (void).cxx_destruct;

@end
