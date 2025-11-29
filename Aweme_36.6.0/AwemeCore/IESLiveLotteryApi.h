@protocol IESLiveRoomService;

@interface IESLiveLotteryApi : HTSLiveApi

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;

- (id)initWithRoomModel:(id)a0;
- (void)checkLotteryUserRightWithLotteryID:(id)a0 roomID:(id)a1 retry:(long long)a2 completion:(id /* block */)a3;
- (void)getLotteryInfoWithRoomID:(id)a0 queryFrom:(unsigned long long)a1 retry:(long long)a2 completion:(id /* block */)a3;
- (void)fetchCanditateStateWithLotteryID:(id)a0 completion:(id /* block */)a1;
- (void)requestFollowInfoWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
