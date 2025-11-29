@class IESLiveFeedPlaceholderItemModel;

@interface IESLiveFeedDrawerPlaceHolderSectionController : IESLiveFeedDrawerListItemSectionController

@property (retain, nonatomic) IESLiveFeedPlaceholderItemModel *item;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
