@interface AWEStoryKit.StoryKitBaseSectionController : AWEBaseListSectionController <AWEListSectionControllerDelegate>

@property (nonatomic, readonly) id viewModel;

- (void)sectionControllerWillDisplay:(id)a0;
- (void)sectionControllerDidEndDisplaying:(id)a0;
- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)sectionDidEndDisplayingCell:(id)a0 index:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)init;

@end
