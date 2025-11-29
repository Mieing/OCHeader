@class NSNumber, NSMutableDictionary;
@protocol AFDPlayRemoteAwemeModelProcessorProtocol;

@interface AWELiveAcqCastLiveStreamDataController : AWEListDataController

@property (readonly, nonatomic) NSNumber *roomID;
@property (readonly, nonatomic) long long scene;
@property (readonly, nonatomic) NSMutableDictionary *modelEventInfo;
@property (readonly, nonatomic) id<AFDPlayRemoteAwemeModelProcessorProtocol> modelProcess;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (BOOL)canLoadMore;
- (id)initWithRoomID:(id)a0 scene:(long long)a1;
- (id)eventInfoForModel:(id)a0;
- (void)__fetchAwemeWithPullType:(long long)a0 completion:(id /* block */)a1;
- (id)__loadmoreDataSourceWithArray:(id)a0;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
