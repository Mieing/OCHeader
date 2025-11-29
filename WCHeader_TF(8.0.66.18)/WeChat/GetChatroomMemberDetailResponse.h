@class ChatRoomMemberData, NSString, NSMutableArray, BaseResponse;

@interface GetChatroomMemberDetailResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *chatroomUserName;
@property (nonatomic) unsigned int serverVersion;
@property (retain, nonatomic) ChatRoomMemberData *newChatroomData;
@property (retain, nonatomic) NSString *chatRoomOwner;
@property (nonatomic) unsigned int allMemberCount;
@property (retain, nonatomic) NSMutableArray *allMemberUserNameList;
@property (nonatomic) unsigned int adminCount;
@property (retain, nonatomic) NSMutableArray *adminUserNameList;

+ (void)initialize;

@end
