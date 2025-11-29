@class AWEPadPolymericChannelHistorySectionViewModel;

@interface AWEPadPolymericChannelHistorySectionController : AWEPadPolymericChannelSlidableSectionController

@property (readonly, weak, nonatomic) AWEPadPolymericChannelHistorySectionViewModel *viewModel;

+ (Class)sectionViewModelClass;

- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;

@end
