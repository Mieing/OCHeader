@class AWEShareModel, NSArray, NSString, AWEHotSearchNewResponseModel, AWENewHotSearchModel, NSMutableArray, NSNumber;
@protocol AWEHotPointPanelControllerProtocol;

@interface AWEIPHotSpotManager : NSObject <AWEHotSpotManagerProtocol>

@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) long long offset;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSMutableArray *dataArray;
@property (copy, nonatomic) NSArray *allHotSpotArray;
@property (copy, nonatomic) NSString *cid;
@property (weak, nonatomic) id<AWEHotPointPanelControllerProtocol> delegate;
@property (retain, nonatomic) NSMutableArray *risingHotSpotArray;
@property (retain, nonatomic) NSNumber *initialWordIndex;
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
@property (nonatomic) long long tabStyle;
@property (nonatomic) BOOL needRequireForTabs;
@property (retain, nonatomic) AWENewHotSearchModel *pinnedTopHotSearchModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fetchGessedSearchKeyword:(id)a0 useJSON:(BOOL)a1 bizID:(id)a2 completion:(id /* block */)a3;

- (void)fetchTrendingWords:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)hotSpotListHasMore;
- (void)fetchTrendWordsListWithParamsModel:(id)a0 otherParams:(id)a1 completion:(id /* block */)a2;
- (void)fetchEventNodeList:(id)a0 completion:(id /* block */)a1;
- (void)modifyEventInfoFotHotspot:(id)a0;
- (void)loadmoreEventNodeList:(id /* block */)a0;
- (id)risingHotSpotTitle;
- (void)requestForHotSpotListWithCompletion:(id /* block */)a0;
- (id)hotSpotListURLString;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestType:(unsigned long long)a0;

@end
