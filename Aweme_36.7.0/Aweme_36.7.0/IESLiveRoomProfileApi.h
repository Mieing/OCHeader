@protocol IESLiveRoomService;

@interface IESLiveRoomProfileApi : HTSLiveApi

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;

- (void)requestCurrentUserFansclubInfoWithFinished:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
