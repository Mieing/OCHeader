@class BaseRequest, NSString;

@interface GetCloudIMSessionRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *privateData;

+ (void)initialize;

@end
