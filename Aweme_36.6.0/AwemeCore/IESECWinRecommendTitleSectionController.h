@class IESECWinContext, IESECWinRecommendTitleObject, IESECCollectionViewSectionLayout;

@interface IESECWinRecommendTitleSectionController : IESECWinListKitCellController {
    IESECWinContext *_context;
    IESECWinRecommendTitleObject *_object;
}

@property (retain, nonatomic) IESECCollectionViewSectionLayout *sectionLayout;

- (id)cellForItemAtIndex:(long long)a0;
- (void)showTrack;
- (void)didUpdateToObject:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
