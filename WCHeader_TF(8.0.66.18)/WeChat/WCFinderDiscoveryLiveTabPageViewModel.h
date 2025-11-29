@class NSString;
@protocol WCFinderDiscoveryLiveTabPageViewModelDelegate;

@interface WCFinderDiscoveryLiveTabPageViewModel : WCFinderLiveTabPageBaseViewModel

@property (retain, nonatomic) NSString *byPassInfo;
@property (weak, nonatomic) id<WCFinderDiscoveryLiveTabPageViewModelDelegate> delegate;

- (id)initWithPassInfo:(id)a0;
- (void)requestLiveTabList;
- (void)requestLiveTabListWithScene:(long long)a0 title:(id)a1 feedExportId:(id)a2 feedNonceId:(id)a3;
- (void).cxx_destruct;

@end
