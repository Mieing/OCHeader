@class NSString, WCMicroMerchantFoldMgr, NSMutableSet, WCPreloadProvider, NSMutableArray, NSMutableDictionary;
@protocol WCPreloadLogicDelegate;

@interface WCPreloadLogicMgr : NSObject <WCPreloadProviderDelegate> {
    NSMutableArray *m_downloadItemID;
    unsigned int m_lastRefreshTime;
    WCPreloadProvider *m_dataProvider;
    unsigned int m_preloadCount;
    BOOL m_enablePreload;
    NSMutableArray *m_waitDownloadItem;
    NSMutableSet *m_setPreDownloadItemIDForBigImage;
    NSMutableSet *m_setPreDownloadItemIDForSmallImage;
    NSMutableDictionary *m_dicPrelDownloadItemNetType;
    NSMutableArray *m_videoDownloadItemID;
    NSMutableArray *m_videoWaitDownloadItem;
    unsigned int m_preloadSucFeedCountForSmallImage;
    unsigned int m_viewNewFeedCount;
    unsigned int m_preloadSucImageCountForBigImage;
    unsigned int m_viewNewBigImageCount;
    unsigned int m_preloadBigImageCount;
    unsigned long long m_latestID;
    NSMutableSet *m_setFirstClickItemIdForLogBigImage;
    NSMutableDictionary *m_dicPreDownloadItemIdToSucPreloadCnt;
    NSMutableDictionary *m_dicPreDownloadItemIdToSucPreloadPicIndexArrayStr;
}

@property (weak, nonatomic) id<WCPreloadLogicDelegate> m_delegate;
@property (retain, nonatomic) WCMicroMerchantFoldMgr *microMerchantFoldMgr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)updateStatusForPreload:(BOOL)a0;
- (void)handleLatestWCObjectChanged:(id)a0;
- (void)tryPreloadData;
- (unsigned int)getNetworkType;
- (int)getCurHistoryClickRatioLimit;
- (void)downloadImages;
- (void)downloadVideos;
- (void)preloadDataList:(id)a0;
- (BOOL)hasPreloadDataItemForSmallImage:(id)a0;
- (BOOL)hasPreloadDataItemForBigImage:(id)a0;
- (BOOL)hasFirstClickDataItemForPreloadBigImage:(id)a0;
- (void)addFirstClickDataItemForPreloadBigImage:(id)a0;
- (void)tryIncreaseSucPreloadCntForItemId:(id)a0 mediaItem:(id)a1;
- (int)getPreloadCntForItemId:(id)a0;
- (id)getpreloadPicIndexArrayStrForItemId:(id)a0;
- (void)removeSucPreloadInfoForItemId:(id)a0;
- (void)removeFirstClickDataItemForPreloadBigImage:(id)a0;
- (void)removePreloadDataItemForSmallImage:(id)a0;
- (void)removePreloadDataItemForBigImage:(id)a0;
- (id)getPreloadNetType:(id)a0;
- (void)onPreloadPageRequestPrepared:(id)a0;
- (void)onDataUpdatedForPreload:(id)a0 andData:(id)a1;
- (BOOL)couldPreloadSmallImage;
- (BOOL)couldPreloadBigImage;
- (BOOL)couldPreloadImage;
- (BOOL)couldPreloadVideo;
- (unsigned int)getCheckUpdateTimeSecs;
- (BOOL)isInPreloadLimitTime;
- (void)addFeedCountForPreloadSmallImageSuc;
- (void)addFeedCountForViewNewFeeds;
- (void)addBigImageCountForPreloadSuc;
- (void)addBigImageCountForViewNewBigImage;
- (void)tryLogPreloadImageResult;
- (BOOL)isInPreloadAroundImgLimitTime;
- (void)downloadMedia:(id)a0 downloadType:(long long)a1;
- (void)downloadMedia:(id)a0 downloadType:(long long)a1 dataItem:(id)a2;
- (void)downloadBatchThumb:(id)a0;
- (void)predictVideoSourceWithDataItems:(id)a0;
- (void)setupMicroMerchantFoldInfoWithTimelineRequest:(id)a0;
- (void).cxx_destruct;

@end
