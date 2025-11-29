@class BaseRequest, NSString;

@interface LaunchBusinessWxaappRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *businessType;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSString *referrerAppid;
@property (retain, nonatomic) NSString *referrerUrl;
@property (nonatomic) unsigned int source;

+ (void)initialize;

@end
