@class BaseRequest, NSString, NSMutableArray;

@interface VoIPMtAddMemberRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *wxGroupid;
@property (retain, nonatomic) NSString *groupid;
@property (retain, nonatomic) NSMutableArray *calleeUsernameList;

+ (void)initialize;

@end
