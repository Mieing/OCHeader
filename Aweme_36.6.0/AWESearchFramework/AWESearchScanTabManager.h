@class NSArray, NSDictionary, NSString, AWESearchScanPanelContentView;

@interface AWESearchScanTabManager : NSObject

@property (retain, nonatomic) NSDictionary *tabToTabFeedViewControllerMap;
@property (copy, nonatomic) NSArray *tabModels;
@property (nonatomic) long long initialIndex;
@property (copy, nonatomic) NSString *selectedTab;
@property (copy, nonatomic) NSArray *boxMap;
@property (weak, nonatomic) AWESearchScanPanelContentView *panelContentView;
@property (copy, nonatomic) NSString *initialTab;
@property (nonatomic) long long selectedIndex;
@property (readonly, nonatomic) long long numberOfTabs;
@property (retain, nonatomic) NSArray *trackSearchTabList;

- (id)tabFeedViewControllerAtIndex:(long long)a0;
- (id)tabTitles;
- (long long)indexOfTab:(id)a0;
- (id)initWithDataContext:(id)a0 panelContentView:(id)a1;
- (id)tabTitleAtIndex:(long long)a0;
- (id)boxModelIDWithIndex:(long long)a0;
- (void)setupTabModelsWithDataContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)tabAtIndex:(long long)a0;

@end
