@class NSString, NSMutableArray, AWETeenDurationHelper;

@interface AWETeenVideoDetailFeedViewController : AWETeenFeedBaseViewController <AWEZoomTransitionInnerContextProvider, AWETeenCustomDisplayViewControllerDelegate>

@property (retain, nonatomic) AWETeenDurationHelper *durationHelper;
@property (retain, nonatomic) NSMutableArray *playItemIDs;
@property (nonatomic) BOOL isFirstWillPlayCell;
@property (nonatomic) long long lastIndex;
@property (copy, nonatomic) id /* block */ currentIndexChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)zoomTransitionItemOffset;
- (id)footerNoMoreDataTitle;
- (void)setWillDisplayCell:(id)a0;
- (void)p_onScrollDidEnd;
- (void)windowDidResignKeyNotification:(id)a0;
- (void)windowDidBecomeKeyNotification:(id)a0;
- (id)initWithDataController:(id)a0 initialIndex:(long long)a1 vcType:(long long)a2 extra:(id)a3;
- (void)notifyCurrentIndexDidChangedIfNeeded;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)applicationDidBecomeActive:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;

@end
