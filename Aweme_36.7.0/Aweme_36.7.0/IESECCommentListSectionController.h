@class IESECCommentListSectionLayout, IESECCommentListKitCommentsModel;

@interface IESECCommentListSectionController : IESECCommentSectionController

@property (retain, nonatomic) IESECCommentListKitCommentsModel *model;
@property (retain, nonatomic) IESECCommentListSectionLayout *sectionLayout;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (void)showCommentGuestWindowViewWithDetailModel:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
