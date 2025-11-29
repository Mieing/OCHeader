@class NSString;

@interface CreateChatRoomReq : BaseReq

@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *chatRoomName;
@property (copy, nonatomic) NSString *chatRoomNickName;
@property (copy, nonatomic) NSString *extMsg;

- (void).cxx_destruct;

@end
