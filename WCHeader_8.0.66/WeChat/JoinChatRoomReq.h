@class NSString;

@interface JoinChatRoomReq : BaseReq

@property (retain, nonatomic) NSString *groupId;
@property (retain, nonatomic) NSString *chatRoomNickName;
@property (retain, nonatomic) NSString *extMsg;

- (void).cxx_destruct;

@end
