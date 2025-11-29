@protocol IESECCommentImpressionSectionLayoutDelegate;

@interface IESECCommentImpressionSectionLayout : IESECCollectionViewSectionWaterfallLayout

@property (weak, nonatomic) id<IESECCommentImpressionSectionLayoutDelegate> layoutDelegate;

- (BOOL)shouldInvalidateLayout;
- (id)prepareSectionItemLayoutAttributes;
- (double)sectionContentHeight;
- (id)prepareSectionLayoutAttribute;
- (void).cxx_destruct;
- (BOOL)invalidateLayoutWithContext:(id)a0;

@end
