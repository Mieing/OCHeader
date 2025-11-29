@protocol IESLiveRoomService;

@interface IESLiveAnchorRankListsStatusApi : HTSLiveApi

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;

- (void)fetchRankListStatusWithCompletion:(id /* block */)a0;
- (void)updateRankListStatusWithRankName:(id)a0 status:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
