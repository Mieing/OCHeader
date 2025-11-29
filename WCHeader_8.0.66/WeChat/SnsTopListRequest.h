@class BaseRequest, NSString;

@interface SnsTopListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned long long maxId;

+ (void)initialize;

@end
