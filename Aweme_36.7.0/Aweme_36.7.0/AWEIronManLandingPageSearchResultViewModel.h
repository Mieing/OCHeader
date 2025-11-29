@class NSString, NSMutableDictionary, AWEIronManLandingPageDataController, NSDictionary, NSArray;

@interface AWEIronManLandingPageSearchResultViewModel : MTLModel <MTLJSONSerializing, AWEIronManLandingPagePreloadProtocol, AWEIronManLandingPageDetailPageViewModelProtocol, AWEIronManLandingPageTrackerViewModelProtocol>

@property (copy, nonatomic) NSString *currentSearchKeyWord;
@property (retain, nonatomic) NSMutableDictionary *trackStatus;
@property (retain, nonatomic) AWEIronManLandingPageDataController *dataVc;
@property (nonatomic) unsigned long long uiVersion;
@property (copy, nonatomic) NSDictionary *bdpExtra;
@property (nonatomic) unsigned long long enterFrom;
@property (nonatomic) unsigned long long searchRange;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSArray *modelList;
@property (retain, nonatomic) NSArray *searchHistoryList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long maxPreloadLimit;
@property BOOL isFetching;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long originalOffset;
@property (copy, nonatomic) NSDictionary *commonTrackDict;

+ (id)modelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)trackEvent:(id)a0 params:(id)a1;
- (id)storageKey;
- (void)preloadItemIfNeed:(id)a0 index:(long long)a1;
- (void)trackEvent:(id)a0 atIndex:(unsigned long long)a1 params:(id)a2;
- (void)fetchMore:(unsigned long long)a0;
- (id)eventStatusKeyAtIndex:(unsigned long long)a0 event:(id)a1;
- (void)readStorage;
- (void)searchKeyWord:(id)a0 count:(unsigned long long)a1;
- (void)resetSearchStatus;
- (void)resetTrackStatus;
- (void).cxx_destruct;
- (void)setStorage:(id)a0;
- (id)init;

@end
