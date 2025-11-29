@class NSArray, ACCAIGCLoraProfileModel, ACCAIGCRecordListDataSource, NSString;

@interface AWECAKAlbumAIAssetViewService : NSObject <AWEUserMessage, CAKAlbumAIAssetViewProtocol>

@property (retain, nonatomic) NSArray *AIInfos;
@property (retain, nonatomic) ACCAIGCLoraProfileModel *currentProfileModel;
@property (retain, nonatomic) ACCAIGCRecordListDataSource *dataSource;
@property (nonatomic) long long lastHistoryCount;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isLoading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long curAIAssetABStyle;
@property (retain, nonatomic) NSArray *AIAssetArr;
@property (nonatomic) unsigned long long type;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)refreshAIAssetsCompletion:(id /* block */)a0;
- (void)appendHistoryArr:(id)a0 Completion:(id /* block */)a1;
- (id)curLoraInfoCover;
- (id)AIHistoryToAlbumAssetWithArr:(id)a0;
- (void)loadMoreAIAssetsCompletion:(id /* block */)a0;
- (BOOL)isAIAssetEntranceEnable;
- (id)curFinishLoraInfoCover;
- (void)onClickSelectAIGCInfoWithComplet:(id /* block */)a0;
- (BOOL)enableMainEntranceTip;
- (void)hasShowMainEntranceTip;
- (void)userCloseMainEntranceTip;
- (BOOL)hasMoreAIAssetData;
- (BOOL)isLoadingAIAssetData;
- (long long)curAIAssetDataDataCount;
- (void)getAIProfileInfo;
- (void)appendLoraInfoCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)pageCount;
- (void)update;

@end
