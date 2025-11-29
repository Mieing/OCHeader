@class WCMicroMerchantFeedsGroup, WCDataItem, CContact, NSMutableDictionary, WCTimeLineVideoPreloadMgr, NSArray, MicroMerchantTableViewOptions;

@interface MicroMerchantTableViewModel : NSObject

@property (retain, nonatomic) WCMicroMerchantFeedsGroup *wcGroup;
@property (retain, nonatomic) WCDataItem *placeholder;
@property (retain, nonatomic) CContact *placeholderContact;
@property (retain, nonatomic) NSMutableDictionary *preloadedImageSet;
@property (retain, nonatomic) WCTimeLineVideoPreloadMgr *videoPreloadMgr;
@property (nonatomic) BOOL isUnfoldEnabled;
@property (nonatomic) BOOL isUnfolded;
@property (retain, nonatomic) NSArray *initialWSFeedList;
@property (retain, nonatomic) NSArray *allWsFeedIdsList;
@property (nonatomic) long long currentFecthFeedIndex;
@property (nonatomic) long long pageIndex;
@property (readonly, nonatomic) MicroMerchantTableViewOptions *options;
@property (nonatomic) BOOL excludesPlaceholder;
@property (nonatomic) BOOL Demo_isUnfolded;
@property (nonatomic) BOOL isLoadingFirstPageData;

- (id)initWithGroupItem:(id)a0 placeholder:(id)a1 options:(id)a2;
- (void)initDatas;
- (void)dealloc;
- (void)clearFeedListCache;
- (void)reloadDataFromServer:(id /* block */)a0;
- (void)loadFirstPageDataFromServer:(BOOL)a0 finishBlock:(id /* block */)a1;
- (void)loadMoreBatchDataFromServer:(id /* block */)a0;
- (BOOL)enableReport36016;
- (void)report36016:(unsigned long long)a0 pageIndex:(long long)a1 reqCount:(long long)a2 rspCount:(long long)a3;
- (BOOL)hasMoreData;
- (id)getDataItemInCache:(id)a0;
- (id)dataItems;
- (id)_wsFeedListFromMgr;
- (BOOL)isLastSection:(long long)a0;
- (long long)numberOfSections;
- (id)sectionFeedModel:(long long)a0;
- (id)sectionFeedModelWithFeedID:(id)a0;
- (unsigned long long)sectionIndexWithFeedID:(id)a0;
- (void)preloadImageDatas:(id)a0;
- (void)preloadVideoDatas:(id)a0 lastAutoPlayID:(id)a1;
- (void)stopPreloadVideoData:(id)a0;
- (void)clearPreloadImage;
- (BOOL)canUnfoldTimeline;
- (BOOL)isCurrentTimelineUnfolded;
- (BOOL)unfoldCurrentTimeline;
- (id)unfoldButtonTitle;
- (id)alreadyUnfoldedTitle;
- (id)unfoldConfirmTitle;
- (id)Demo_unfoldStatusDictionary;
- (id)_hostContactOfWCDataItem:(id)a0;
- (void).cxx_destruct;

@end
