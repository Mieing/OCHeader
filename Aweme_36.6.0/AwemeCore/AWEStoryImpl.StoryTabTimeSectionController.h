@interface AWEStoryImpl.StoryTabTimeSectionController : AWEStoryKit.StoryKitBaseSectionController

@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } inset;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) double minimumInteritemSpacing;

- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)configSupplementaryHeaderView:(id)a0;
- (id)customSupplementaryElementKinds;
- (id)customViewForSupplementaryElementOfKind:(id)a0 atIndex:(long long)a1;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (id)init;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;
- (Class)headerViewClass;

@end
