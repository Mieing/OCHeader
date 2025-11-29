@class NSString, AWESmartFeedLastViewModel, AWEAwemeModel, AWECodeGenBubbleToastModel, NSNumber;

@interface AWEStoryImpl.FamiliarDataController : AWEListDataController <AWEFamiliarDataControllerProtocol, AWESmartFeedDataControllerProtocol, AWEFriendsTabDataControllerProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataLayer;
    void /* unknown type, empty encoding */ httpTask;
    void /* unknown type, empty encoding */ p_familiarFeedOnTopChannelStopRefreshLoadingViewBlock;
    void /* unknown type, empty encoding */ p_familiarFeedInitFetchBeginRefreshingBlock;
    void /* unknown type, empty encoding */ p_familiarFeedInitFetchStopRefreshingBlock;
    void /* unknown type, empty encoding */ p_serviceContainer;
    void /* unknown type, empty encoding */ responseTypeNumber;
}

@property (nonatomic, retain) AWECodeGenBubbleToastModel *bubbleToastModel;
@property (nonatomic, readonly) long long friendsFeedHistoryCacheListCount;
@property (nonatomic) double lastLeaveTabTimeStamp;
@property (nonatomic) double lastEnterTabTimeStamp;
@property (nonatomic, copy) id /* block */ initFetchBeginRefreshingBlock;
@property (nonatomic, copy) id /* block */ initFetchStopRefreshingBlock;
@property (nonatomic, copy) id /* block */ didUpdateDataSource;
@property (nonatomic, retain) AWEAwemeModel *publishForceInsertAwemeModel;
@property (nonatomic, retain) AWEAwemeModel *publishForceInsertAwemeMomentModel;
@property (nonatomic, copy) NSString *publishCreateAwemeItemID;
@property (nonatomic, readonly) long long lastPullType;
@property (nonatomic, readonly) NSNumber *responseType;
@property (nonatomic, readonly) BOOL meetResponseDisaster;
@property (nonatomic) BOOL isUploadAwemeInsertedBeforeInitialFetch;
@property (nonatomic, retain) AWESmartFeedLastViewModel *lastViewModel;
@property (nonatomic, readonly) BOOL hasUpdatedItems;
@property (nonatomic, copy) NSString *blankPanelText;
@property (nonatomic) BOOL isVCDAuthFirstTime;
@property (nonatomic) BOOL hasReadAllFreshContent;
@property (nonatomic) BOOL isRecommendFlow;
@property (nonatomic, retain) AWESmartFeedLastViewModel *readAllRecAwemeTips;
@property (nonatomic, copy) id /* block */ familiarFeedOnTopChannelStopRefreshLoadingViewBlock;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) BOOL loadmoreHasMore;

- (long long)receiveResponseUpdateCount;
- (void)recordLastFriendsTabYellowDotInfo;
- (id)findUnreadAwemeAuthorAvatars:(long long)a0;
- (id)findNextUnreadAweme:(long long)a0 needLoadMore:(BOOL *)a1;
- (void)touchPreloadInitFetchFamiliarData;
- (unsigned long long)recommendAwemeCount;
- (unsigned long long)freshCount;
- (void)registerFamiliarViewControllerInstance:(id)a0;
- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
