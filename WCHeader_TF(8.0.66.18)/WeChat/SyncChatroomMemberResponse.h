@class NSString, NSMutableArray, BaseResponse;

@interface SyncChatroomMemberResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *nextVersion;
@property (retain, nonatomic) NSMutableArray *memberUsernameList;

+ (void)initialize;

@end
