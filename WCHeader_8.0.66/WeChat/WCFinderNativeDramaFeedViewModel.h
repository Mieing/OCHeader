@class NSString, NSArray, WCFinderFeedContentVM, WCFinderNativeDramaListDataProvider, FinderNativeDramaInfo, NSMutableSet, WCFinderNativeDramaPromotionDataProvider, NSMutableArray, WCFinderNativeDramaFeedJSParams;
@protocol WCFinderNativeDramaFeedViewModelDelegate;

@interface WCFinderNativeDramaFeedViewModel : NSObject <WCFinderNativeDramaListDataProviderDelegate, WCFinderFeedListViewDataSource>

@property (retain, nonatomic) FinderNativeDramaInfo *info;
@property (nonatomic) unsigned long long destinationEpisodeID;
@property (retain, nonatomic) WCFinderNativeDramaListDataProvider *dramaDataProvider;
@property (retain, nonatomic) WCFinderNativeDramaPromotionDataProvider *promotionDataProvider;
@property (retain, nonatomic) NSMutableArray *mixedFeed;
@property (retain, nonatomic) NSArray *tempJumpFeed;
@property (readonly, nonatomic) NSArray *currentFeed;
@property (weak, nonatomic) id<WCFinderNativeDramaFeedViewModelDelegate> delegate;
@property (nonatomic) unsigned long long enterEpisodeID;
@property (retain, nonatomic) WCFinderNativeDramaFeedJSParams *jsParams;
@property (retain, nonatomic) NSMutableSet *viewedPromotions;
@property (retain, nonatomic) WCFinderFeedContentVM *destinationEpisode;
@property (nonatomic) double currentPlayRate;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParams:(id)a0;
- (BOOL)isDramaFeed:(id)a0;
- (BOOL)hasMoreInDirection:(unsigned long long)a0;
- (void)fetchWithDirection:(unsigned long long)a0;
- (void)fetchWithEpisodesID:(unsigned long long)a0;
- (void)updateContentVMWithEpisodeID:(unsigned long long)a0;
- (void)fetchPromotionIfNeed:(id)a0 shouldInsert:(id /* block */)a1 completion:(id /* block */)a2;
- (id)adGatingInfoForContentVM:(id)a0;
- (id)lockEpisodesFromEpisodeID:(unsigned long long)a0;
- (id)bottomPromotion;
- (BOOL)shouldDisabledFeedInteractive:(long long)a0;
- (long long)indexForEpisodeID:(unsigned long long)a0;
- (id)contentVMForEpisodeID:(id)a0;
- (id)contentVMForIndex:(long long)a0;
- (void)_insertFeed:(id)a0 toIndex:(long long)a1;
- (void)_updateFeedWithDiff:(id)a0;
- (id)enterJumpModeFromIndex:(long long)a0 toIndex:(long long)a1;
- (id)exitJumpMode;
- (id)finderFeedListView:(id)a0 contentVMAtSection:(long long)a1;
- (id)finderFeedListView:(id)a0 contentVMOfTid:(id)a1;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)a0 sectionOfTid:(id)a1;
- (void)dataProvider:(id)a0 didFetchContentVMs:(id)a1 targetEpisodeID:(unsigned long long)a2 direction:(unsigned long long)a3;
- (void)dataProvider:(id)a0 didFetchCacheContentVM:(id)a1;
- (void).cxx_destruct;

@end
