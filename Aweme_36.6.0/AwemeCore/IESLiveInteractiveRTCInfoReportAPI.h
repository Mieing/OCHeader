@protocol IESLiveRoomService;

@interface IESLiveInteractiveRTCInfoReportAPI : HTSLiveApi

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;

- (id)initWithRoomModel:(id)a0;
- (void)reportRTCInfoWith:(id)a0 source:(unsigned long long)a1 callback:(id /* block */)a2;
- (id)transformReportSource:(unsigned long long)a0;
- (void).cxx_destruct;

@end
