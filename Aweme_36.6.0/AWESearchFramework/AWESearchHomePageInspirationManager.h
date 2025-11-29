@class NSArray, NSMutableDictionary, NSString, AWEStorage, NSDictionary, NSNumber;

@interface AWESearchHomePageInspirationManager : NSObject

@property (retain, nonatomic) AWEStorage *storage;
@property (nonatomic) long long guidePeriod;
@property (nonatomic) long long guideDefaultPeriod;
@property (nonatomic) BOOL isFirstOpen;
@property (retain, nonatomic) NSMutableDictionary *gidDict;
@property (retain, nonatomic) NSMutableDictionary *lastBackTimeDict;
@property (retain, nonatomic) NSMutableDictionary *lastEnterTimeDict;
@property (nonatomic) long long searchBarHeight;
@property (nonatomic) BOOL isSearchStatus;
@property (nonatomic) BOOL isSearchAndRecommend;
@property (retain, nonatomic) NSArray *queryList;
@property (copy, nonatomic) NSString *clarifyQuery;
@property (retain, nonatomic) NSDictionary *queryResponse;
@property (retain, nonatomic) NSMutableDictionary *queryResponseFromPage;
@property (copy, nonatomic) NSString *pageName;
@property (retain, nonatomic) NSNumber *touchInspirationStart;
@property (retain, nonatomic) NSNumber *touchInspirationEnd;
@property (retain, nonatomic) NSNumber *singleTapRecognized;
@property (retain, nonatomic) NSNumber *preLoadInspirationLynxStart;
@property (retain, nonatomic) NSNumber *preRequestInspirationStart;
@property (retain, nonatomic) NSNumber *preRequestInspirationEnd;
@property (retain, nonatomic) NSNumber *inspirationPanelShow;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isSearching;
@property (nonatomic) unsigned long long position;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL isInSearchContext;
@property (nonatomic) BOOL isHotOpen;
@property (nonatomic) long long exposedCountAfterHotOpen;
@property (readonly, nonatomic) NSNumber *lastTimeBackFromSearchResultPage;
@property (readonly, nonatomic) NSNumber *lastTimeEnterSearchResultPage;
@property (readonly, copy, nonatomic) NSString *gid;

+ (id)sharedInstance;

- (void)updateSearchStatus:(BOOL)a0;
- (void)updateSingleTapRecognized:(id)a0;
- (void)setGid:(id)a0 scene:(id)a1;
- (void)updateTouchInspirationPanelShow:(id)a0;
- (void)updateSearchBarHeight:(long long)a0;
- (void)updateTouchInspirationStart:(id)a0;
- (void)updateTouchInspirationEnd:(id)a0;
- (void)setLastTimeEnterSearchResultPage:(id)a0 scene:(id)a1;
- (BOOL)showGuideInspirationIfNeed;
- (BOOL)ifReachToastThreshold;
- (void)updateTouchPreLoadInspirationLynx:(id)a0;
- (void)setLastTimeBackFromSearchResultPage:(id)a0 scene:(id)a1;
- (BOOL)enableInspiration;
- (void)updateGuidTime;
- (BOOL)checkLastGuidTimeValidate;
- (id)fetchQueryList;
- (id)fetchQueryResponse;
- (id)fetchClarifyQuery;
- (void)updateFirstOpen;
- (id)getLastTimeBackFromSearchResultPageFromScene:(id)a0;
- (id)getLastTimeEnterSearchResultPageFromScene:(id)a0;
- (id)getGidFromScene:(id)a0;
- (void)updateIsSearchAndRecommendSwitch:(BOOL)a0;
- (void)updateClarifyQuery:(id)a0;
- (void)updateQueryList:(id)a0;
- (void)updatePageName:(id)a0;
- (void)updateQueryResponse:(id)a0 withPageName:(id)a1;
- (void)updateTouchPreRequestInspirationStart:(id)a0;
- (void)updateTouchPreRequestInspirationEnd:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clearProperties;

@end
