@class NSString, NSMutableArray, NSNumber;

@interface AWEFavoriteFileDataController : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) BOOL isAddVideo;
@property (nonatomic) BOOL isAddNewFile;
@property (nonatomic) BOOL isMaintainRequest;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (copy, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSNumber *fileNumber;
@property (copy, nonatomic) NSString *toUserID;
@property (copy, nonatomic) NSString *toUserSecID;
@property (nonatomic) BOOL isFetchingFollowedFavoriteFile;

- (id)addURLString:(id)a0 withItemId:(id)a1;
- (void)refreshWithPlayTime:(id)a0 videoTIme:(id)a1 itemID:(id)a2 block:(id /* block */)a3;
- (void)addNewFileWithItemID:(id)a0 collectsName:(id)a1 coverUrl:(id)a2 topping:(BOOL)a3 extraParam:(id)a4 block:(id /* block */)a5;
- (void)addNewFileWithItemID:(id)a0 collectsName:(id)a1 coverUrl:(id)a2 topping:(BOOL)a3 block:(id /* block */)a4;
- (void)addNewFileWithArray:(id)a0 collectsName:(id)a1 withCollectsIdFrom:(id)a2 extraParam:(id)a3 block:(id /* block */)a4;
- (void)addNewFileWithArray:(id)a0 collectsName:(id)a1 withCollectsIdFrom:(id)a2 block:(id /* block */)a3;
- (void)changeFileNameWithCollectsId:(id)a0 collectsName:(id)a1 extraParam:(id)a2 block:(id /* block */)a3;
- (void)changeFileNameWithCollectsId:(id)a0 collectsName:(id)a1 block:(id /* block */)a2;
- (void)errorHmdTrackWithTrackService:(id)a0 WithStatusCode:(id)a1 isModelNull:(BOOL)a2 NSError:(id)a3;
- (void)hmdTrackServiceWithStatusCode:(id)a0 withLogid:(id)a1 withTrackService:(id)a2;
- (void)addVideoWithCollectsId:(id)a0 withItemID:(id)a1 block:(id /* block */)a2;
- (void)refreshWithPlayTime:(id)a0 videoTIme:(id)a1 itemID:(id)a2 extraParams:(id)a3 block:(id /* block */)a4;
- (void)loadMoreWithPlayTime:(id)a0 videoTIme:(id)a1 itemID:(id)a2 extraParams:(id)a3 block:(id /* block */)a4;
- (void)maintainRequestWithParms:(id)a0 withURLString:(id)a1 block:(id /* block */)a2;
- (void)addVideoWithCollectsIdFrom:(id)a0 withCollectsIdTo:(id)a1 withItemID:(id)a2 block:(id /* block */)a3;
- (BOOL)isAllCollectsSecret;
- (void)loadMoreWithPlayTime:(id)a0 videoTIme:(id)a1 itemID:(id)a2 block:(id /* block */)a3;
- (void)addVideoWithVideoId:(id)a0 collectsId:(id)a1 block:(id /* block */)a2;
- (void)moveVideoWithFromCollectsId:(id)a0 withItemID:(id)a1 block:(id /* block */)a2;
- (void)deleteWithCollectsId:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
