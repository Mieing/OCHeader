@class IESECCommentImpressionSectionLayout, NSString, IESECCommentListKitTagsModel;

@interface IESECCommentImpressionSectionController : IESECCommentSectionController <IESECCommentImpressionSectionLayoutDelegate>

@property (retain, nonatomic) IESECCommentListKitTagsModel *model;
@property (retain, nonatomic) IESECCommentImpressionSectionLayout *sectionLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (BOOL)stickyIndex:(long long)a0;
- (BOOL)shouldSticky;
- (long long)currentStickyRow;
- (double)currentSectionHeight;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
