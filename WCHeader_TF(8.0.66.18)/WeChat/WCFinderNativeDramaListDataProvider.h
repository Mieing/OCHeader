@class NSString, WCFinderNativeDramaListDataProviderParams, WCFinderNativeDramaPromotionDataService, NSData, NSMutableDictionary, NSMutableArray, NSArray;
@protocol WCFinderNativeDramaListDataProviderDelegate;

@interface WCFinderNativeDramaListDataProvider : NSObject <WCFinderFeedListViewDataSource>

@property (retain, nonatomic) WCFinderNativeDramaListDataProviderParams *params;
@property (retain, nonatomic) NSMutableArray *contentVMs;
@property (retain, nonatomic) NSData *upLastBuffer;
@property (retain, nonatomic) NSData *downLastBuffer;
@property (nonatomic) BOOL downHasMore;
@property (nonatomic) BOOL upHasMore;
@property (nonatomic) int consumerMode;
@property (retain, nonatomic) NSMutableArray *fetchingDirection;
@property (retain, nonatomic) NSMutableArray *fetchingCGI;
@property (retain, nonatomic) WCFinderNativeDramaPromotionDataService *promotionDataService;
@property (retain, nonatomic) NSMutableDictionary *promotions;
@property (weak, nonatomic) id<WCFinderNativeDramaListDataProviderDelegate> delegate;
@property (readonly, nonatomic) NSArray *items;
@property (nonatomic) unsigned long long targetEpisodeID;
@property (copy, nonatomic) NSString *fetchListErrorMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParams:(id)a0;
- (BOOL)isFetchingInDirections:(id)a0;
- (void)fetchWithDirection:(unsigned long long)a0;
- (void)fetchWithEpisodeID:(unsigned long long)a0;
- (void)_fetchWithDirection:(unsigned long long)a0 episodeID:(unsigned long long)a1;
- (void)_fetchSingleEpisode:(unsigned long long)a0;
- (void)_fetchSingleEpisodeWithJSParams:(id)a0;
- (void)_didFetichSIngleEpisode:(id)a0;
- (void)_updateObjects:(id)a0 direction:(unsigned long long)a1;
- (void)_notifyItemDidChangedWithOldItems:(id)a0 direction:(unsigned long long)a1;
- (void)localUpdateEpisodeID:(unsigned long long)a0;
- (id)_contentVMWithDataItem:(id)a0;
- (void)fetchPromotionWithEpisodeID:(unsigned long long)a0 enterEpisodeID:(unsigned long long)a1 consumerMode:(int)a2 scene:(int)a3 shouldInsert:(id /* block */)a4 completion:(id /* block */)a5;
- (BOOL)isPromotionWithIdentifier:(id)a0;
- (BOOL)isFetchingPromotion;
- (id)contentVMForIndex:(long long)a0;
- (id)finderFeedListView:(id)a0 contentVMAtSection:(long long)a1;
- (id)finderFeedListView:(id)a0 contentVMOfTid:(id)a1;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)a0 sectionOfTid:(id)a1;
- (void).cxx_destruct;

@end
