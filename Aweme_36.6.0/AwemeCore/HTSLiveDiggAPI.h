@protocol IESLiveRoomService;

@interface HTSLiveDiggAPI : HTSLiveApi

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;

- (void)digg:(long long)a0 duration:(long long)a1 index:(id)a2 finishBlock:(id /* block */)a3;
- (void)iesGetDiggIconListWithFinish:(id /* block */)a0;
- (void)iesDigg:(long long)a0 finishBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
