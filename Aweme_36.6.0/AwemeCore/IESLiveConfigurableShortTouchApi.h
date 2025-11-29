@protocol IESLiveRoomService;

@interface IESLiveConfigurableShortTouchApi : HTSLiveApi

@property (retain, nonatomic) id<IESLiveRoomService> room;

- (void)traceArriveTime:(BOOL)a0;
- (BOOL)subscribeBackEndDataWithContext:(id)a0 completion:(id /* block */)a1;
- (void)realFetchConfigurableShortTouchInfo:(id)a0 completion:(id /* block */)a1 immediate:(BOOL)a2;
- (void)dealShortTouchResponse:(id)a0 serverTime:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)fetchConfigurableShortTouchInfo:(id)a0 completion:(id /* block */)a1;
- (void)dealShortTouchResponse:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
