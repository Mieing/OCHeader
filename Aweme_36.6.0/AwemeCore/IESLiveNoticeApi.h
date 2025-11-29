@protocol IESLiveRoomService;

@interface IESLiveNoticeApi : HTSLiveApi

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;

- (void)postTimeLimitBlockFinishedWithKey:(id)a0;
- (void)rejectEducationLearningWithTaskID:(id)a0 userAction:(long long)a1 completion:(id /* block */)a2;
- (void)sendDeblockMessage;
- (void)getLatestBanRecordWithBanType:(long long)a0 finished:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
