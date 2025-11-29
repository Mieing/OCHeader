@interface AWEDCFeedSkeletonConfig : AWEDCFeedBaseConfig

@property (nonatomic) long long skeletonCellCount;
@property (copy, nonatomic) id /* block */ createSkeletonSectionViewModelsBlock;
@property (copy, nonatomic) id /* block */ isShowingSkeletonBlock;
@property (copy, nonatomic) id /* block */ currentSectionViewModelsArrayEnableSkeleton;
@property (copy, nonatomic) id /* block */ skeletonCellChecker;

- (void)setupDefaultConfig;
- (void).cxx_destruct;

@end
