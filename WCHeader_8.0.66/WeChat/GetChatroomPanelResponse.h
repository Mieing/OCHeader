@class ChatroomPanel, BaseResponse;

@interface GetChatroomPanelResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) ChatroomPanel *chatroomPanel;

+ (void)initialize;

@end
