@interface AWEStoryImpl.StoryMateRecommendVerticalSectionViewModel : AWEStoryImpl.StoryBaseSectionViewModel <AWEUserRecommendTableViewModelDelegate> {
    void /* unknown type, empty encoding */ basicViewModel;
    void /* unknown type, empty encoding */ delegate;
}

- (void)viewModelDidRefresh:(id)a0;
- (void)viewModelDidLoadMore:(id)a0 indexes:(id)a1;
- (void)viewModel:(id)a0 didRemoveModelsAtIndexes:(id)a1;
- (void)viewModel:(id)a0 didInsertModelsAtIndexes:(id)a1;
- (void)viewModel:(id)a0 didUpdateModelsAtIndexes:(id)a1;
- (void).cxx_destruct;

@end
