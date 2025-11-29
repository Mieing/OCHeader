@class NSArray, NSString;

@interface WCFinderLiveTabPageBaseViewModel : NSObject

@property (nonatomic) long long scene;
@property (retain, nonatomic) NSArray *liveTabList;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned long long hideTabs;
@property (nonatomic) unsigned long long prefechTabPullType;
@property (nonatomic) unsigned long long prefechPreTabPullType;
@property (nonatomic) unsigned long long prefechNextTabPullType;

- (BOOL)checkLoadLocalLiveTabsCache;
- (void)checkSyncToLocalLiveTabsCache:(id)a0 scene:(unsigned long long)a1;
- (BOOL)shouldCacheTabWithScene:(unsigned long long)a0;
- (void)updateVmWith:(id)a0;
- (BOOL)isEqualWith:(id)a0;
- (BOOL)hasTabDataUpdated:(id)a0;
- (void).cxx_destruct;

@end
