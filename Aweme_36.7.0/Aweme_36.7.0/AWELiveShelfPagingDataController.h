@class AWELifeShelfCardListItem, NSArray, AWELiveShelfClassifyTabItemModel, NSString, NSMutableDictionary, NSDictionary, AWELiveShelfPagingLynxModuleOperator, NSMutableSet, UIViewController, AWELifeShelfResponseModel, NSObject;
@protocol AWELiveShelfPagingTrackerDelegate, AWELiveShelfVC, AWELiveShelfPagingDataDelegate, OS_dispatch_source;

@interface AWELiveShelfPagingDataController : NSObject

@property (retain, nonatomic) AWELiveShelfClassifyTabItemModel *guessLikeTabItem;
@property (retain, nonatomic) AWELiveShelfClassifyTabItemModel *allTabItem;
@property (retain, nonatomic) NSMutableDictionary *tab4CardList;
@property (weak, nonatomic) UIViewController<AWELiveShelfPagingDataDelegate, AWELiveShelfPagingTrackerDelegate, AWELiveShelfVC> *delegate;
@property (retain, nonatomic) NSMutableSet *showedItems;
@property (retain, nonatomic) NSMutableSet *allShowedItems;
@property (retain, nonatomic) NSMutableSet *allMPItems;
@property (retain, nonatomic) NSMutableSet *allTakeOutItems;
@property (retain, nonatomic) NSMutableSet *allMPTakeOutItems;
@property (retain, nonatomic) AWELifeShelfCardListItem *preShowedExplainCard;
@property (copy, nonatomic) NSArray *visibleItems;
@property (nonatomic) long long currentDepth;
@property (retain, nonatomic) NSMutableDictionary *tab2CardNumMap;
@property (copy, nonatomic) NSDictionary *poiSessionData;
@property (nonatomic) double shelfWidth;
@property (copy, nonatomic) NSDictionary *lynxCommonData;
@property (retain, nonatomic) NSDictionary *feConfig;
@property (retain, nonatomic) AWELifeShelfResponseModel *model;
@property (nonatomic) BOOL isReuse;
@property (nonatomic) BOOL isClosed;
@property (nonatomic) BOOL hasConfigCardList;
@property (nonatomic) BOOL isHalfScreenBegin;
@property (copy, nonatomic) NSString *closedFromSource;
@property (nonatomic) long long currentMode;
@property (nonatomic) BOOL hasOpened;
@property (nonatomic) BOOL hasReportShelfShow;
@property (nonatomic) BOOL hasProcessedData;
@property (nonatomic) double serverTime;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *serverTimeTimer;
@property (nonatomic) unsigned long long requestStage;
@property (nonatomic) long long cacheStatus;
@property (nonatomic) BOOL isCacheRequesting;
@property (nonatomic) unsigned long long actionType;
@property (nonatomic) double startRequestTimeStamp;
@property (retain, nonatomic) AWELiveShelfClassifyTabItemModel *currentTabItem;
@property (retain, nonatomic) AWELiveShelfPagingLynxModuleOperator *lynxModuleOperator;

- (void)updateServerTime:(double)a0;
- (BOOL)isLynxModuleReady;
- (void)processShelfData:(id)a0 cardList:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (id)shelfDataLynxModule;
- (id)getCurrentTabCardManagerModel;
- (id)getTabCardManagerModel:(long long)a0;
- (void)clearTabMap;
- (id)getLynxCardDataWithItem:(id)a0;
- (id)roomDataForLynxModule;
- (id)nativeDataForLynxModule;
- (id)lynxShelfTrackParams;
- (void)updateTabItemWithTabId:(long long)a0;
- (void)updatePartListWithModel:(id)a0;
- (void)recordShowedItemsWithItem:(id)a0;
- (void)clearTabCardManagerModels;
- (void)updateWithShelfResponseModel:(id)a0 actionType:(unsigned long long)a1;
- (void)updateTabMapCurrentCardNum;
- (long long)calculateTotalItems;
- (void)updateShowedItems;
- (id)nativeDataForLynxModuleWithModel:(id)a0 actionType:(unsigned long long)a1 cacheStatus:(long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
