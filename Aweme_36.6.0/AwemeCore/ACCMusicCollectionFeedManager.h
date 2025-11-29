@class NSArray, NSString, NSError, NSNumber, NSMutableArray;

@interface ACCMusicCollectionFeedManager : NSObject

@property (nonatomic) BOOL hasMoreDiscover;
@property (nonatomic) BOOL hasMoreFavourite;
@property (nonatomic) BOOL isFetchingFavouriteList;
@property (nonatomic) BOOL isFetchingInitialDiscoverList;
@property (nonatomic) BOOL isFetchingMoreDiscoverList;
@property (nonatomic) BOOL isFetchingMoreFMData;
@property (retain, nonatomic) NSNumber *discoverCursor;
@property (retain, nonatomic) NSNumber *favouriteCursor;
@property (nonatomic) BOOL hasFetchedInitialPickData;
@property (nonatomic) BOOL hasFetchedInitialDiscoverData;
@property (copy, nonatomic) id /* block */ initialFetchCompletion;
@property (retain, nonatomic) NSError *initialFetchDiscoverError;
@property (retain, nonatomic) NSError *initialFetchPickError;
@property (copy, nonatomic) NSArray *placeholderBannerList;
@property (retain, nonatomic) NSMutableArray *discoverList;
@property (retain, nonatomic) NSMutableArray *favouriteList;
@property (retain, nonatomic) NSMutableArray *propBindMusicList;
@property (retain, nonatomic) NSMutableArray *challengeList;
@property (copy, nonatomic) id /* block */ bannerFetchCompletion;
@property (retain, nonatomic) NSArray *propBindMusicIdArray;
@property (nonatomic) BOOL isCommerceMusic;
@property (nonatomic) long long recordModel;
@property (nonatomic) double videoDuration;
@property (copy, nonatomic) NSString *playlistId;

- (void)p_fetchDataWithType:(unsigned long long)a0 params:(id)a1 pickCompletion:(id /* block */)a2 completion:(id /* block */)a3;
- (void)p_fetchPickData:(id)a0 completion:(id /* block */)a1;
- (void)p_loadDiscoverWithCursor:(id)a0 count:(id)a1 completion:(id /* block */)a2;
- (void)p_loadFavouriteWithCursor:(id)a0 count:(id)a1 completion:(id /* block */)a2;
- (void)p_loadMoreWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)updateInitialFetchIfNeeded;
- (void)fetchDataWithType:(unsigned long long)a0 params:(id)a1 pickCompletion:(id /* block */)a2 completion:(id /* block */)a3;
- (void)loadMoreWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
