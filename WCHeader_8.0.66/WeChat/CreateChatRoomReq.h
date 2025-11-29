@class NSString;

@interface CreateChatRoomReq : BaseReq

@property (retain, nonatomic) NSString *groupId;
@property (retain, nonatomic) NSString *chatRoomName;
@property (retain, nonatomic) NSString *chatRoomNickName;
@property (retain, nonatomic) NSString *extMsg;

- (void).cxx_destruct;

@end
