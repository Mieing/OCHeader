@class IESECCommentTagSectionLayout, IESECCommentListKitStatsModel;

@interface IESECCommentTagSectionController : IESECCommentSectionController

@property (retain, nonatomic) IESECCommentListKitStatsModel *model;
@property (retain, nonatomic) IESECCommentTagSectionLayout *sectionLayout;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (void)setupAllCommentSectionSelectedTagID:(id)a0 isImpressionTag:(BOOL)a1;
- (void)setupAllCommentSectionSelectedTagID:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
