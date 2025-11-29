@class NSString, NSArray, AWEMusicCollectionData, NSMutableArray;

@interface AWEASMusicMoreManager : NSObject

@property (retain, nonatomic) NSString *cursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) AWEMusicCollectionData *playlist;
@property (nonatomic) BOOL firstRequesFinished;
@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) NSArray *banners;
@property (copy, nonatomic) NSString *playlistId;
@property (retain, nonatomic) NSMutableArray *collectionList;

- (void)loadMoreDataCompletion:(id /* block */)a0;
- (void)refreshDataCompletion:(id /* block */)a0;
- (void)requestMusicCollectionFeedWithCursor:(id)a0 count:(id)a1 lunaPlaylistId:(id)a2 needBanner:(BOOL)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;

@end
