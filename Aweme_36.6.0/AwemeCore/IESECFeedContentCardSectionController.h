@protocol IESECFeedContentCardCellDelegate, IESECFeedContentCardCellModel;

@interface IESECFeedContentCardSectionController : IGListSectionController {
    id<IESECFeedContentCardCellModel, IESECFeedContentCardCellDelegate> _viewModel;
}

@property (readonly, nonatomic) id viewModel;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
