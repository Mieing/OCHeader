@protocol IESLiveRoomService;

@interface IESLiveRecordStateApi : HTSLiveApi

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) long long preState;

- (void)state:(long long)a0 finishType:(long long)a1 source:(unsigned long long)a2 trace:(id)a3 isRetry:(BOOL)a4 extra:(id)a5 completion:(id /* block */)a6;
- (id)sourceStringFrom:(unsigned long long)a0;
- (void)state:(long long)a0 finishType:(long long)a1 source:(unsigned long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
