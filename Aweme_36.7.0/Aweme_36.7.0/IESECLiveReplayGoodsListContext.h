@class NSMutableArray, UIViewController, IESECLiveReplayDataStore;

@interface IESECLiveReplayGoodsListContext : IESECLiveBaseListContext

@property (weak, nonatomic) IESECLiveReplayDataStore *liveReplayDataStore;
@property (weak, nonatomic) UIViewController *goodsListContainerVC;
@property (retain, nonatomic) NSMutableArray *goodsShowCacheList;

- (void).cxx_destruct;

@end
