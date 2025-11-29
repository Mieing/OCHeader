@class NSArray, NSString;

@interface WCFinderGetLiveTabsInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSArray *liveTabList;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned long long hideTabs;
@property (nonatomic) unsigned long long prefechTabPullType;
@property (nonatomic) unsigned long long prefechPreTabPullType;
@property (nonatomic) unsigned long long prefechNextTabPullType;
@property (retain, nonatomic) NSArray *navTabList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_hideTabs;
+ (void)PBArrayAdd_prefechTabPullType;
+ (void)PBArrayAdd_prefechPreTabPullType;
+ (void)PBArrayAdd_prefechNextTabPullType;
+ (void)PBArrayAdd_liveTabList;
+ (void)PBArrayAdd_navTabList;
+ (void)initialize;
+ (id)finderGetLiveTabsInfoFrom:(id)a0;

- (id)getPBPropertyTable;
- (id)recommendTabInfo;
- (void).cxx_destruct;

@end
