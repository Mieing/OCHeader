@class NSString, NSArray, NSNumber, NSMutableArray;

@interface AWEAnchorMusicSelectSearchViewModel : NSObject

@property (copy, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *cellModels;
@property (readonly, copy, nonatomic) NSString *musicId;
@property (retain, nonatomic) NSMutableArray *allTrackIDs;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (id)initWithMusicId:(id)a0;
- (void)refreshWithSearchText:(id)a0 completion:(id /* block */)a1;
- (void)loadMoreWithSearchText:(id)a0 refresh:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
