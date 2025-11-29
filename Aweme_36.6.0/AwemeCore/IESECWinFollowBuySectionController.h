@class IESECWinFollowBuyCell, IESECWinFollowBuyObject, IESECServiceProxy, FBKVOController;
@protocol IESECWinMainScrollService, IESECWinSplitService;

@interface IESECWinFollowBuySectionController : IESECWinListKitCellController

@property (retain, nonatomic) FBKVOController *kvoCtrl;
@property (retain, nonatomic) IESECWinFollowBuyObject *object;
@property (weak, nonatomic) IESECWinFollowBuyCell *followBuyCell;
@property (retain, nonatomic) IESECServiceProxy<IESECWinSplitService> *splitService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinMainScrollService> *scrollService;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (void)trackShow;
- (id)configWithCell:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)addObserver;
- (void)scrollViewDidScroll;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
