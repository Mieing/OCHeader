@class NSArray, WCFinderNativeDramaPromotionDataService, WCFinderNativeDramaListDataProvider, WCFinderFeedContentVM, NSString;
@protocol WCFinderNativeDramaFeedViewModelDelegate, WCFinderFeedListViewDataSource;

@interface WCFinderNativeDramaFeedViewModel : NSObject <WCFinderNativeDramaListDataProviderDelegate>

@property (nonatomic) unsigned long long dramaID;
@property (retain, nonatomic) WCFinderNativeDramaListDataProvider *dataProvider;
@property (nonatomic) unsigned long long destinationEpisodeID;
@property (weak, nonatomic) id<WCFinderNativeDramaFeedViewModelDelegate> delegate;
@property (nonatomic) unsigned long long enterEpisodeID;
@property (readonly, nonatomic) id<WCFinderFeedListViewDataSource> feedListDataSource;
@property (readonly, nonatomic) WCFinderNativeDramaPromotionDataService *promotionDataService;
@property (retain, nonatomic) WCFinderFeedContentVM *destinationEpisode;
@property (nonatomic) double currentPlayRate;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSString *fetchListErrorMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParams:(id)a0;
- (BOOL)isFetchingDramaList;
- (BOOL)hasMoreInDirection:(unsigned long long)a0;
- (void)fetchWithDirection:(unsigned long long)a0;
- (id)lockEpisodesFromEpisodeID:(unsigned long long)a0;
- (void)fetchWithEpisodesID:(unsigned long long)a0;
- (void)fetchPromotionIfNeed:(id)a0 scene:(int)a1 shouldInsert:(id /* block */)a2 completion:(id /* block */)a3;
- (BOOL)isNativeDramaFeed:(id)a0;
- (id)adGatingInfoForIndex:(long long)a0;
- (void)updateContentVMWithEpisodeID:(unsigned long long)a0;
- (id)contentVMForEpisodeID:(unsigned long long)a0;
- (id)contentVMForIndex:(long long)a0;
- (id)bottomPromotionTipsWithCountDown:(long long)a0;
- (void)dataProvider:(id)a0 feedItemDidChangeWithDiff:(id)a1 modifyDirection:(unsigned long long)a2;
- (void).cxx_destruct;

@end
