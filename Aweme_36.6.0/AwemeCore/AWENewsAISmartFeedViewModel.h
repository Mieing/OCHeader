@class AWENewsAISmartFeedConfigManager, NSString, AWENewsAISmartFeedPageContext, NSMutableArray, AWENewsAISmartFeedDataController;
@protocol AWENewsAISmartFeedViewModelDelegate;

@interface AWENewsAISmartFeedViewModel : NSObject

@property (copy, nonatomic) id /* block */ dataInitFetchCompletionBlock;
@property (retain, nonatomic) NSMutableArray *displayItems;
@property (nonatomic) unsigned long long currentState;
@property (nonatomic) long long pageType;
@property (retain, nonatomic) AWENewsAISmartFeedPageContext *context;
@property (retain, nonatomic) AWENewsAISmartFeedDataController *dataController;
@property (weak, nonatomic) id<AWENewsAISmartFeedViewModelDelegate> delegate;
@property (retain, nonatomic) AWENewsAISmartFeedConfigManager *configManager;
@property (nonatomic) BOOL hasInitFetched;
@property (nonatomic) double totalStayDuration;
@property (nonatomic) double enterTimestamp;
@property (nonatomic) BOOL isLoadingMore;
@property (nonatomic) long long remainingCountMax;
@property (retain, nonatomic) NSMutableArray *displaySectionCardIDs;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) BOOL isSlide;
@property (nonatomic) BOOL hasFindFirstUnSubscribeCard;
@property (nonatomic) BOOL hasShowFirstCard;
@property (copy, nonatomic) NSString *fetchDataType;

- (id)logExtraDict;
- (void)loadMoreDataWithCompletion:(id /* block */)a0;
- (id)p_updateCellModel:(id)a0;
- (id)initWithPageContext:(id)a0;
- (void)insertPlaceholderViewModel;
- (void)trackerFeedVCExit:(id)a0;
- (void)trackerDetailFeedVCExit:(id)a0;
- (void)trackerFeedVCShow:(id)a0;
- (void)trackerDetailFeedVCShow:(id)a0;
- (void)fetchDataWithCompletion:(id /* block */)a0;
- (BOOL)firstCardIsTrackTab:(id)a0;
- (long long)showCountForHeaderWithArray:(id)a0;
- (void)refreshDataWithCompletion:(id /* block */)a0;
- (void)trackerLoadResult:(id)a0;
- (void)deleteTrackCardWithParams:(id)a0;
- (void)trackerLoadTime:(id)a0;
- (void)p_configWithPageContext:(id)a0;
- (void)insertDisplayObjectsFromArray:(id)a0 animated:(BOOL)a1 intoIndex:(id /* block */)a2 completion:(id /* block */)a3;
- (void)p_preCreateTwoPartLynxCardsWithArray:(id)a0 indexBlock:(id /* block */)a1 completion:(id /* block */)a2 animated:(BOOL)a3;
- (void)p_preCreateLynxCardsWithModels:(id)a0 group:(id)a1;
- (id)p_createPlaceholderKeysForPageType:(long long)a0;
- (long long)p_totalCountForCardIDs:(id)a0 fromItems:(id)a1;
- (id)p_trackDetailDict;
- (void)p_preLoadImageWithFeed:(id)a0;
- (id)p_getImageStringWithFeed:(id)a0;
- (void).cxx_destruct;

@end
