@class UIViewController, NSString, IESServiceProvider, AWEDetailTrendViewModel;
@protocol AWEDetailMusicListViewModelProtocol, AWEDetailTrendTrackerService;

@interface AWEDetailTrendShareServiceImpl : NSObject <AWEDetailShareService>

@property (weak, nonatomic) UIViewController *host;
@property (weak, nonatomic) IESServiceProvider *provider;
@property (weak, nonatomic) AWEDetailTrendViewModel *stateContext;
@property (weak, nonatomic) id<AWEDetailMusicListViewModelProtocol> musicListDataContext;
@property (weak, nonatomic) id<AWEDetailTrendTrackerService> trendTrackerService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
