@class NSString;

@interface JoinChatRoomReq : BaseReq

@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *chatRoomNickName;
@property (copy, nonatomic) NSString *extMsg;

- (void).cxx_destruct;

@end
