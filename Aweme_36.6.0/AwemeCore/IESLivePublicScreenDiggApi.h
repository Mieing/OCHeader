@protocol IESLiveRoomService;

@interface IESLivePublicScreenDiggApi : HTSLiveApi

@property (retain, nonatomic) id<IESLiveRoomService> room;

- (id)initWithRoomModel:(id)a0;
- (void)operateMsgStateWithId:(long long)a0 option:(long long)a1 callback:(id /* block */)a2;
- (void)getMsgStateWithIds:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;

@end
