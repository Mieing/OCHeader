@class AWEAwemeModel;
@protocol AWEHttpTask;

@interface AWEVideoPlayDanmakuService : NSObject

@property (nonatomic) long long danmakuScene;
@property (retain, nonatomic) id<AWEHttpTask> currentFetchDataTask;
@property (retain, nonatomic) AWEAwemeModel *model;

+ (void)danmakuPrivilegeCheckWithCompletion:(id /* block */)a0;
+ (void)updateDanmakuPrivilege:(id)a0 level:(long long)a1 completion:(id /* block */)a2;
+ (void)fetchDanmakuWithItemId:(id)a0 danmakuIds:(id)a1 completion:(id /* block */)a2;
+ (void)sendWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)digDanmakuWithModel:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
+ (void)handleDislikeDanmakuWithOption:(BOOL)a0 model:(id)a1 completion:(id /* block */)a2;
+ (void)deleteDanmakuWithModel:(id)a0 completion:(id /* block */)a1;
+ (void)fetchDanmakuDataListWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)sendLandScapeDanmakuDataUrl;
+ (id)fetchDanmakuDataListUrl;
+ (id)danmakuDiggUpdateUrl;
+ (id)dislikeDanmakuUrl;
+ (id)danmakuDeleteUrl;
+ (id)danmakuPrivilegeUrl;
+ (id)danmakuPrivilegeUserUrl;
+ (id)fetchDanmakuByIdsUrl;

- (void)cancelFetchDataRequest;
- (void)fetchDanmakuDataSourceControlByServerWithItemID:(id)a0 fromStartTime:(double)a1 endTime:(double)a2 scene:(long long)a3 extraDict:(id)a4 completion:(id /* block */)a5;
- (id)initWithDanmakuScene:(long long)a0;
- (id)fetchLandScapeDanmakuDataUrl;
- (void).cxx_destruct;

@end
