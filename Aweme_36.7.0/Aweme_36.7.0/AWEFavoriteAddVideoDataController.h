@class NSString, NSArray, AWEAwemeModel, NSNumber, NSMutableArray;

@interface AWEFavoriteAddVideoDataController : AWEListDataController <AWEFavoriteFileVideoDataControllerProtocol>

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSNumber *collectsId;
@property (copy, nonatomic) NSString *collectsName;
@property (copy, nonatomic) NSString *tagName;
@property (nonatomic) long long pageSize;
@property (copy, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) id /* block */ fileVideoDataBlock;
@property (copy, nonatomic) NSArray *disabledItemIds;
@property (nonatomic) long long initFecthCount;
@property (nonatomic) long long initialId;
@property (copy, nonatomic) AWEAwemeModel *initialModel;
@property (copy, nonatomic) NSArray *initialModels;
@property (nonatomic) BOOL isLoadingData;
@property (retain, nonatomic) NSMutableArray *dataLoadingCompletionBlockArray;
@property (copy, nonatomic) id /* block */ syncAwemeVCBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (id)getExpectedSizeInfo;
- (void)refreshWithParams:(id)a0 block:(id /* block */)a1;
- (void)endTimingWithLoadMore:(BOOL)a0;
- (void)errorHmdTrackWithTrackService:(id)a0 WithStatusCode:(id)a1 isModelNull:(BOOL)a2 NSError:(id)a3;
- (void)hmdTrackServiceWithStatusCode:(id)a0 withLogid:(id)a1 withTrackService:(id)a2;
- (void)refreshWithCollectsId:(id)a0 block:(id /* block */)a1;
- (id)initWithCollectsId:(id)a0 withCollectsName:(id)a1 withTagName:(id)a2;
- (void)refreshWithTagName:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;

@end
