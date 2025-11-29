@class BaseRequest, NSString, NSMutableArray;

@interface VoIPMtCreateRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *wxGroupid;
@property (retain, nonatomic) NSMutableArray *calleeUsernameList;

+ (void)initialize;

@end
