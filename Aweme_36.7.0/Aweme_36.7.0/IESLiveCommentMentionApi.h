@protocol IESLiveRoomService;

@interface IESLiveCommentMentionApi : HTSLiveApi

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;

- (void)fetchChatMentionListWithKeyword:(id)a0 completion:(id /* block */)a1;
- (void)fetchChatMentionMsg:(id /* block */)a0;
- (void).cxx_destruct;

@end
