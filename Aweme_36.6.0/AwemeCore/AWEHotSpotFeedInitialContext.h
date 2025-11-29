@class NSString, NSMutableDictionary, NSDictionary, AWEHotSearchBoardTabModel, AWEHotSpotFeedViewModel;

@interface AWEHotSpotFeedInitialContext : NSObject

@property (weak, nonatomic) AWEHotSpotFeedViewModel *viewModel;
@property (nonatomic) unsigned long long entryWordType;
@property (retain, nonatomic) AWEHotSearchBoardTabModel *initialTabModel;
@property (nonatomic) BOOL requireManualChangeSpotInSearchTimeline;
@property (copy, nonatomic) NSString *enterHotSpotInnerWord;
@property (nonatomic) long long hotFeedStyle;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) NSMutableDictionary *requestCommonParams;
@property (retain, nonatomic) NSMutableDictionary *requestVideoListParams;
@property (retain, nonatomic) NSMutableDictionary *requestSearchListParams;
@property (copy, nonatomic) NSString *hotSpotServerParamStr;
@property (copy, nonatomic) NSString *reactId;
@property (nonatomic) long long entryType;
@property (nonatomic) long long entryTypeForPlayer;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *backToSchema;
@property (copy, nonatomic) NSString *cityCode;
@property (nonatomic) long long initialIndex;
@property (nonatomic) long long currentIndex;
@property (copy, nonatomic) NSString *trendEntryWord;
@property (nonatomic) BOOL shouldShowCommentBar;
@property (copy, nonatomic) NSString *roomID;
@property (nonatomic) BOOL isFromLive;
@property (nonatomic) BOOL isFromNewHotSearch;
@property (nonatomic) long long bizType;
@property (copy, nonatomic) NSString *bizKey;
@property (copy, nonatomic) NSDictionary *bizParams;
@property (nonatomic) BOOL enterFromPinnedTop;
@property (nonatomic) BOOL shouldDisableThroughHotSpot;
@property (nonatomic) BOOL jumpToRankTop;
@property (nonatomic) BOOL loadPrevious;
@property (nonatomic) BOOL expandPanelAfterFetchingData;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *initialItemID;

- (void)configWithParamDict:(id)a0;
- (id)getHandledOriginalDataArray:(id)a0 hotSpotModel:(id)a1 loadmoreHasMore:(BOOL)a2 needUpdateCount:(BOOL)a3;
- (id)createInitialTabModel:(id)a0;
- (void)configPostConfigWithParamDict:(id)a0;
- (id)configHotSearchModelWithParamsDict:(id)a0;
- (void)configHotFeedStyleWithParamDict:(id)a0;
- (void)configRequestParamsWithParamsDict:(id)a0;
- (id)configDataControllerWithParamsDict:(id)a0;
- (void)configBusinessProperty:(id)a0;
- (void)configAbility:(id)a0;
- (void)configTrackers:(id)a0;
- (void)configSearchTimeLineInfo:(id)a0 paramDict:(id)a1;
- (void)updateBizTypeAndParams:(id)a0;
- (id)parsePreloadArrayWithParamDict:(id)a0;
- (void)preHandleStructureParam:(id)a0 forDataArray:(id)a1;
- (id)refactor_getHandledOriginalDataArray:(id)a0 hotSpotModel:(id)a1 loadmoreHasMore:(BOOL)a2 paramsDict:(id)a3;
- (void)configInitialIndexParamsDict:(id)a0;
- (void).cxx_destruct;

@end
