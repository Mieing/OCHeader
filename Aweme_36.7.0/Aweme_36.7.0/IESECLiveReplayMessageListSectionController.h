@class IESECLiveReplayMessageCellViewModel;

@interface IESECLiveReplayMessageListSectionController : IGListSectionController

@property (retain, nonatomic) IESECLiveReplayMessageCellViewModel *viewModel;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
