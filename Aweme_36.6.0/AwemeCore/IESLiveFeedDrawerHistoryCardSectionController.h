@class IESLiveFeedDrawerHistoryCardModel, IESLiveFeedDrawerHistoryCardCell;

@interface IESLiveFeedDrawerHistoryCardSectionController : IESLiveFeedDrawerListItemSectionController

@property (retain, nonatomic) IESLiveFeedDrawerHistoryCardModel *item;
@property (weak, nonatomic) IESLiveFeedDrawerHistoryCardCell *currentCell;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (void)trackCellWillShow;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
