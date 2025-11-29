@class UIViewController, NSString, AWEPadChannelTracker, AWEPadFeedChannelDataController;
@protocol AWEFeedTableViewControllerProtocol, AWEFeedTabItemViewControllerProtocol;

@interface AWEPadFeedContentViewModel : NSObject

@property (copy, nonatomic) NSString *sourcePath;
@property (nonatomic) long long awemeType;
@property (nonatomic) long long tabType;
@property (retain, nonatomic) AWEPadFeedChannelDataController *dataController;
@property (retain, nonatomic) AWEPadChannelTracker *tracker;
@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol, AWEFeedTableViewControllerProtocol> *contentViewController;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)initWithSourcePath:(id)a0 awemeType:(long long)a1 padTabType:(long long)a2 enterFrom:(id)a3;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
