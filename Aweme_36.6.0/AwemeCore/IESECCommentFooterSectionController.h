@class IESECCommentListKitFooterModel, IESECCommentFooterSectionLayout;

@interface IESECCommentFooterSectionController : IESECCommentSectionController

@property (retain, nonatomic) IESECCommentListKitFooterModel *model;
@property (retain, nonatomic) IESECCommentFooterSectionLayout *sectionLayout;
@property (nonatomic) double bottomViewHeight;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
