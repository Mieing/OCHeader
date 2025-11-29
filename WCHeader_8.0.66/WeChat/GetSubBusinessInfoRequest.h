@class BaseRequest, NSString;

@interface GetSubBusinessInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *businessId;

+ (void)initialize;

@end
