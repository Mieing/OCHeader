@class BaseRequest, NSString, RoomTools;

@interface RoomToolsAlterWxAppRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *chatRoomName;
@property (retain, nonatomic) RoomTools *roomTools;

+ (void)initialize;

@end
