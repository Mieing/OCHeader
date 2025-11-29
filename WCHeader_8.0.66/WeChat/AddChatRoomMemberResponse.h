@class NSString, NSMutableArray, BaseResponse;

@interface AddChatRoomMemberResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int memberCount;
@property (retain, nonatomic) NSMutableArray *memberList;
@property (retain, nonatomic) NSString *tips;

+ (void)initialize;

@end
