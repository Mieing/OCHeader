@class BaseRequest, NSString;

@interface GetUserRankDetailRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *appusername;

+ (void)initialize;

@end
