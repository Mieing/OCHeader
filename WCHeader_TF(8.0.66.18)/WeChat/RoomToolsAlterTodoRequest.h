@class BaseRequest, NSString, RoomToolsTodo;

@interface RoomToolsAlterTodoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *chatRoomName;
@property (nonatomic) unsigned int op;
@property (retain, nonatomic) RoomToolsTodo *roomToolsTodo;

+ (void)initialize;

@end
