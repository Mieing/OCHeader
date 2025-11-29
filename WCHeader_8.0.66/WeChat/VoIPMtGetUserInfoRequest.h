@class BaseRequest, NSMutableArray, NSString;

@interface VoIPMtGetUserInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *usernames;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *wxGroupid;

+ (void)initialize;

@end
