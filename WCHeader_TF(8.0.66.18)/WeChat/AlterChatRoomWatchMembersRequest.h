@class BaseRequest, NSString, NSMutableArray;

@interface AlterChatRoomWatchMembersRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *chatRoomName;
@property (nonatomic) unsigned int watchMemberCount;
@property (retain, nonatomic) NSMutableArray *watchMembers;

+ (void)initialize;

@end
