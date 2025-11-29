@protocol IESLiveRoomService;

@interface IESLiveScreencastMsgPushApi : HTSLiveApi

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;

- (void)setAnchorCommentPushTypes:(id)a0 status:(id)a1 callback:(id /* block */)a2;
- (void)setAnchorCommentPushType:(long long)a0 status:(id)a1 callback:(id /* block */)a2;
- (void)updateAnchorCommentPushConfig:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
