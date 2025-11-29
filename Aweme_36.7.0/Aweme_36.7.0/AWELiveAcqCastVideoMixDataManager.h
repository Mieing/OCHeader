@class NSNumber, NSString, NSMutableArray;

@interface AWELiveAcqCastVideoMixDataManager : AWEListDataController

@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) NSMutableArray *cellSizeArray;
@property (retain, nonatomic) NSNumber *roomID;

+ (void)requestMixVideoDetailInfo:(id)a0 completeBlock:(id /* block */)a1;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)initWithUserID:(id)a0;
- (id)urlForProfileMix;
- (double)itemWidthWithMixName:(id)a0;
- (void).cxx_destruct;
- (id)params;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
