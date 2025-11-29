@class NSString, AWEPlaylistInfoModel, NSArray, NSNumber, NSMutableArray;

@interface AWEMusicSelectSearchViewModel : NSObject

@property (copy, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *requestID;
@property (retain, nonatomic) AWEPlaylistInfoModel *playlistModel;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *cellModels;
@property (nonatomic) BOOL isMiniLuna;
@property (retain, nonatomic) NSMutableArray *allTrackIDs;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)refreshWithSearchText:(id)a0 completion:(id /* block */)a1;
- (void)loadMoreWithSearchText:(id)a0 refresh:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithPlaylistModel:(id)a0;
- (void).cxx_destruct;

@end
