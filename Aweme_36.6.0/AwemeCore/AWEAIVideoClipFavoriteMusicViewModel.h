@class AWEVideoPublishMusicSelectUserCollectionsReqeustManager, NSMutableArray, NSString;
@protocol AWEAIVideoClipFavoriteMusicViewModelDelegate;

@interface AWEAIVideoClipFavoriteMusicViewModel : NSObject <AWEVideoPublishMusicSelectViewUserCollectedMusicDelegate>

@property (retain, nonatomic) AWEVideoPublishMusicSelectUserCollectionsReqeustManager *requestManager;
@property (retain, nonatomic) NSMutableArray *musicList;
@property (nonatomic) BOOL isRefetching;
@property (weak, nonatomic) id<AWEAIVideoClipFavoriteMusicViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchDataWithCompletion:(id /* block */)a0;
- (void)retryFetchFirstPage;
- (void)fetchNextPage:(id /* block */)a0;
- (id)generateMusicListWithRspModel:(id)a0;
- (BOOL)isProcessingFetchingData;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasMore;
- (void)resetData;

@end
