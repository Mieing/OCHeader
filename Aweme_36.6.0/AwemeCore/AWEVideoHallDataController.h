@class NSString, AWEVideoHallRequestModel;

@interface AWEVideoHallDataController : AWEBaseDataController

@property (retain, nonatomic) AWEVideoHallRequestModel *model;
@property (copy, nonatomic) NSString *scene;

+ (void)getVideoHallEntranceStatus:(id /* block */)a0;
+ (void)addVideoHallEntranceWithIsNewVersion:(BOOL)a0 completion:(id /* block */)a1;
+ (void)loadAwemeModelWithAlbumId:(id)a0 completion:(id /* block */)a1;
+ (void)loadAwemeModelWithAwemeId:(id)a0 completion:(id /* block */)a1;

- (void)fetchWithCompletion:(id /* block */)a0 isOnFeedShare:(BOOL)a1 fetchType:(unsigned long long)a2;
- (void)refreshWithCompletion:(id /* block */)a0 isOnFeedShare:(BOOL)a1;
- (void)loadmoreWithCompletion:(id /* block */)a0 isOnFeedShare:(BOOL)a1;
- (void).cxx_destruct;

@end
