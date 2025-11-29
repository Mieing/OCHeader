@class NSString, AWEFollowListRecommendCardHeader;

@interface AWEFollowListRecommendCardSectionController : AWEBaseListSectionController <AWEFollowListRecommendCardCellDelegate, AWEFollowListRecommendCardHeaderDelegate>

@property (weak, nonatomic) AWEFollowListRecommendCardHeader *header;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)sectionViewModelClass;

- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)configSupplementaryHeaderView:(id)a0;
- (void)didTapDislikeButtonOnCell:(id)a0 dataSourceIndex:(long long)a1;
- (void)didTapFollowButtonOnCell:(id)a0 dataSourceIndex:(long long)a1 completion:(id /* block */)a2;
- (void)didTapCancelButtonOnHeader;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (Class)headerViewClass;

@end
