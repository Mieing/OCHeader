@class NSError, NSString, NSArray, TabItem, AWEFeedLiveTabDataApi, NSDictionary, NSNumber, FeedLiveTabData;

@interface AWEFeedLiveTabMultiTabDataCenter : NSObject <AWEFeedLiveTabMultiTabDataCenterService, AWEFeedLiveTabSelectionService>

@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) AWEFeedLiveTabDataApi *api;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) long long landingTabID;
@property (copy, nonatomic) NSString *landingTabName;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *landingParams;
@property (retain, nonatomic) NSNumber *requestTabID;
@property (nonatomic) double requestTimeStamp;
@property (nonatomic) BOOL loadmoreHasMore;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long lastPullType;
@property (retain, nonatomic) NSDictionary *lastRequestParams;
@property (retain, nonatomic) TabItem *defaultItem;
@property (nonatomic) BOOL tabDataChanged;
@property (retain, nonatomic) TabItem *currentSelectedTabItem;
@property (retain, nonatomic) NSArray *tabData;
@property (retain, nonatomic) FeedLiveTabData *requestData;
@property (retain, nonatomic) NSArray *diffDeleteTabIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)defaultTabItem;
- (void)requestLiveTabInfoWithType:(long long)a0 params:(id)a1 tabItem:(id)a2 completion:(id /* block */)a3;
- (id)buildRequestParamsWithPullType:(long long)a0 params:(id)a1;
- (void)configTabItems:(id)a0;
- (void)didSelectTabItem:(id)a0;
- (void)requestLiveTabInfoWithType:(long long)a0 params:(id)a1 tabName:(id)a2 tabId:(long long)a3 tabEvent:(id)a4 completion:(id /* block */)a5;
- (id)selectedTabItem;
- (id)tabItemAtTabID:(long long)a0;
- (id)tabItemAtIndex:(long long)a0;
- (long long)tabItemIndexAtTabID:(long long)a0;
- (BOOL)tabDataHasChanged;
- (id)tabIdsNeedDeleted;
- (BOOL)currentTabHasChanged;
- (id)tabIDsArray;
- (void)handleSelectedTabWithTabData:(id)a0;
- (BOOL)tabDataChangedWithTabData:(id)a0;
- (void)fetchDiffDeletedIdsWithTabData:(id)a0;
- (id)initWithEnterFrom:(id)a0 enterMethod:(id)a1 landingTabID:(long long)a2 landingTabName:(id)a3 eventName:(id)a4 landingParams:(id)a5;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (long long)selectedIndex;

@end
