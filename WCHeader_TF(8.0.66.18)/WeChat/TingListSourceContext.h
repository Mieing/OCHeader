@class MMListenMusicChatRoomInfo, NSString, NSData, MMListenFeedIdListResponse, MMListenRecommendInfo, TingListFliterCondiction, NSMutableArray, TingRecommendCategoryInfo, TingItem;

@interface TingListSourceContext : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *itemList;
@property (nonatomic) BOOL mergeWithBaseListenId;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (retain, nonatomic) NSMutableArray *topListenIdList;
@property (retain, nonatomic) MMListenRecommendInfo *recommendInfo;
@property (retain, nonatomic) NSString *positionListenId;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) int listOrderType;
@property (retain, nonatomic) TingListFliterCondiction *fliterCondiction;
@property (retain, nonatomic) NSMutableArray *filterListenCtx;
@property (nonatomic) int itemCountPerPage;
@property (nonatomic) unsigned int loadListScene;
@property (nonatomic) int presetListLoadMode;
@property (retain, nonatomic) NSMutableArray *presetItemList;
@property (nonatomic) BOOL refreshOnSameMd5;
@property (retain, nonatomic) NSData *musicGlobalContextBuffer;
@property (nonatomic) BOOL deletePlayingItemAfterListen;
@property (retain, nonatomic) MMListenMusicChatRoomInfo *musicChatRoomInfo;
@property (retain, nonatomic) MMListenFeedIdListResponse *preloadFeedidlistResponse;
@property (nonatomic) BOOL useListenUuid;
@property (nonatomic) BOOL disableCache;
@property (retain, nonatomic) TingRecommendCategoryInfo *recommendCategoryInfo;
@property (retain, nonatomic) TingItem *positionListItem;

+ (void)initialize;

@end
