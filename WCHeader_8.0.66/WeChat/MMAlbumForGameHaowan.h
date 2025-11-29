@class NSArray, NSString, GameVideoAlbumDataFetcher, NSMutableArray;
@protocol GameDataChangedObserver;

@interface MMAlbumForGameHaowan : MMAlbum <GameVideoAlbumDataFetcherDelegate> {
    NSArray *_albumInfos;
    GameVideoAlbumDataFetcher *_dataFetcher;
    BOOL _shouldInclude;
    BOOL _isOnlyShowVideo;
    BOOL _hasSetupLocalVideoList;
    int _onlineVideoEndIndex;
    unsigned long long _maxAskedIndex;
    int _errorCount;
}

@property (retain, nonatomic) NSMutableArray *combinVideoList;
@property (readonly, nonatomic) unsigned long long combinedVideoCount;
@property (nonatomic) BOOL hasReceiveCommonVideoList;
@property (readonly, nonatomic) BOOL hasOccurredFault;
@property (copy, nonatomic) NSArray *recommendVideoList;
@property (weak, nonatomic) id<GameDataChangedObserver> changedObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAlbumInfos:(id)a0;
- (void)setupMMAlbumForGameHaowan;
- (id)albumId;
- (id)name;
- (unsigned long long)photosCount;
- (id)coverImage;
- (id)assetOfIndex:(unsigned long long)a0;
- (void)stopICloudActivity;
- (unsigned long long)columnCount;
- (void)retrivePhotoCountWithAsyncBlock:(id /* block */)a0;
- (void)retriveCoverImageWithAsyncBlock:(id /* block */)a0;
- (id)lastAssetWithSecond:(double)a0;
- (void)setupLocalVideoList;
- (void)appendLocalAssets:(id)a0 albumInfo:(id)a1;
- (id)fetchAssets:(id)a0;
- (id)fetchAssetCollection:(id)a0;
- (void)fetchOnlineVideoListIfNeed;
- (void)notifyGameDataChanged;
- (void)albumDataFetcher:(id)a0 didReceivedRecommendVideoList:(id)a1;
- (void)albumDataFetcher:(id)a0 didReceivedVideoList:(id)a1;
- (void)albumDataFetcher:(id)a0 didFailedWithError:(id)a1;
- (void)appendOnlineVideoList:(id)a0;
- (unsigned long long)searchInsertPositionForOnlineVideo:(unsigned long long)a0 beginIndex:(unsigned long long)a1;
- (void).cxx_destruct;

@end
