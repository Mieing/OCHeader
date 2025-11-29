@class IESLiveFeedDrawerBannerItemModel, IESLiveFeedDrawerBannerCollectionViewCell;

@interface IESLiveFeedDrawerBannerSectionController : IESLiveFeedDrawerListItemSectionController

@property (retain, nonatomic) IESLiveFeedDrawerBannerItemModel *item;
@property (weak, nonatomic) IESLiveFeedDrawerBannerCollectionViewCell *cell;

+ (double)heightForBannerWithModel:(id)a0 padding:(double)a1 width:(double)a2;

- (id)cellForItemAtIndex:(long long)a0;
- (void)refreshLayout:(BOOL)a0;
- (void)didUpdateToObject:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
