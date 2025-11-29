@protocol IESLiveRoomService;

@interface IESLiveCommonCardApi : HTSLiveApi

@property (weak, nonatomic) id<IESLiveRoomService> room;

- (void)traceArriveTime:(BOOL)a0;
- (void)fetchBottomRightCardInfo:(id)a0 completion:(id /* block */)a1;
- (BOOL)subscribeBackEndDataWithContext:(id)a0 completion:(id /* block */)a1;
- (void)getBottomRightCardInfo:(id)a0 completion:(id /* block */)a1 immediate:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
