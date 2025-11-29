@class NSArray, FinderLiveLbsInfo;
@protocol WCFinderNearbyTabPageViewModelDelegate;

@interface WCFinderNearbyTabPageViewModel : WCFinderLiveTabPageBaseViewModel

@property (retain, nonatomic) FinderLiveLbsInfo *nearbyVideoTabInfo;
@property (weak, nonatomic) id<WCFinderNearbyTabPageViewModelDelegate> delegate;
@property (readonly, nonatomic) NSArray *liveTabList;

- (id)init;
- (void)requestLiveTabList:(BOOL)a0;
- (id)queryCityTabInfoFromList;
- (void).cxx_destruct;

@end
