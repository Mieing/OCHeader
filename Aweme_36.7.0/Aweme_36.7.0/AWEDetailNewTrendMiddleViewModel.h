@class AWEDetailNewTrendMiddleDataContext, AWEDetailNewTrendMiddleTracker, AWEDetailNewTrendMiddleSectionViewModel;

@interface AWEDetailNewTrendMiddleViewModel : AWEBaseListViewModel

@property (retain, nonatomic) AWEDetailNewTrendMiddleDataContext *dataContext;
@property (retain, nonatomic) AWEDetailNewTrendMiddleTracker *tracker;
@property (retain, nonatomic) AWEDetailNewTrendMiddleSectionViewModel *sectionViewModel;

- (void)setupViewModel;
- (id)sectionViewModels;
- (void)configUIWithModels:(id)a0;
- (void).cxx_destruct;

@end
