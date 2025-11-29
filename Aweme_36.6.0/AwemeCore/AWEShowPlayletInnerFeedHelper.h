@class AWEDiscoverDPlayletTableViewController;
@protocol AWEDiscoverDPlayletPanelDelegate;

@interface AWEShowPlayletInnerFeedHelper : NSObject

@property (weak, nonatomic) AWEDiscoverDPlayletTableViewController<AWEDiscoverDPlayletPanelDelegate> *currentInnerFeedVC;

+ (id)sharedHelper;

- (void).cxx_destruct;

@end
