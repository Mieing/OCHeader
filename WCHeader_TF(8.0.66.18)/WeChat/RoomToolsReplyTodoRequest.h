@class BaseRequest, NSString, RoomToolsTodo;

@interface RoomToolsReplyTodoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *chatRoomName;
@property (retain, nonatomic) NSString *creator;
@property (retain, nonatomic) NSString *todoId;
@property (retain, nonatomic) RoomToolsTodo *roomToolsTodo;

+ (void)initialize;

@end
