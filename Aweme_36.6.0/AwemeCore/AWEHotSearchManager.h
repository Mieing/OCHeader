@class AWEShareModel, NSArray, NSString, AWEHotSearchNewResponseModel, AWENewHotSearchModel, NSNumber, NSMutableArray;

@interface AWEHotSearchManager : NSObject <AWEHotSpotManagerProtocol>

@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic) long long mainHotSpotID;
@property (retain, nonatomic) NSNumber *timelineOffset;
@property (retain, nonatomic) NSNumber *timelineCount;
@property (nonatomic) BOOL eventListIsRequesting;
@property (nonatomic) BOOL eventListFinishFetch;
@property (nonatomic) BOOL detailInfoIsRequesting;
@property (retain, nonatomic) NSMutableArray *dataArray;
@property (retain, nonatomic) NSMutableArray *risingHotSpotArray;
@property (copy, nonatomic) NSArray *allHotSpotArray;
@property (copy, nonatomic) NSArray *originEventList;
@property (copy, nonatomic) NSArray *filterEventList;
@property (copy, nonatomic) NSString *activeTime;
@property (copy, nonatomic) NSString *opDefaultWord;
@property (copy, nonatomic) NSString *opSearchWord;
@property (copy, nonatomic) NSString *guessWordID;
@property (copy, nonatomic) NSString *trendEntryWord;
@property (retain, nonatomic) AWEShareModel *shareInfo;
@property (retain, nonatomic) AWEHotSearchNewResponseModel *hotSearchNewResponseModel;
@property (nonatomic) unsigned long long boardType;
@property (retain, nonatomic) NSNumber *initialWordIndex;
@property (nonatomic) long long tabStyle;
@property (nonatomic) BOOL needRequireForTabs;
@property (retain, nonatomic) AWENewHotSearchModel *pinnedTopHotSearchModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fetchGessedSearchKeyword:(id)a0 useJSON:(BOOL)a1 bizID:(id)a2 completion:(id /* block */)a3;
+ (id)guessWordDomain;

- (id)getExpectedSizeInfo;
- (void)fetchTrendWordsListWithParamsModel:(id)a0 otherParams:(id)a1 completion:(id /* block */)a2;
- (void)fetchEventNodeList:(id)a0 completion:(id /* block */)a1;
- (void)modifyEventInfoFotHotspot:(id)a0;
- (void)loadmoreEventNodeList:(id /* block */)a0;
- (id)risingHotSpotTitle;
- (void)addMacToParam:(id)a0;
- (id)hotListURLString;
- (id)filteredHotSearchList:(id)a0 withType:(unsigned long long)a1;
- (id)filterFakeHotSpotList:(id)a0 paramModel:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestType:(unsigned long long)a0;

@end
