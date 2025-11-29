@protocol WCFinderNearbyMoreLiveViewModelDelegate;

@interface WCFinderNearbyMoreLiveViewModel : WCFinderLiveTabPageBaseViewModel

@property (nonatomic) int fromScene;
@property (weak, nonatomic) id<WCFinderNearbyMoreLiveViewModelDelegate> delegate;
@property (nonatomic) BOOL hasRefreshLiveTabList;

- (id)initWithLiveTabList:(id)a0 fromScene:(int)a1;
- (void)requestLiveTabList;
- (BOOL)checkNeedRefreshReddot:(unsigned long long)a0;
- (BOOL)checkNeedRequestLocationAuth:(unsigned long long)a0;
- (void).cxx_destruct;

@end
