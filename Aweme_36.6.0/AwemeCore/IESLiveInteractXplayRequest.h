@protocol IESLiveRoomService;

@interface IESLiveInteractXplayRequest : HTSLiveApi

@property (weak, nonatomic) id<IESLiveRoomService> room;

- (void)notifyInitStatusUpdated:(unsigned long long)a0 source:(id)a1 completion:(id /* block */)a2;
- (void)startWithGameId:(id)a0 source:(id)a1 completion:(id /* block */)a2;
- (void)stopWithGameId:(id)a0 source:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
