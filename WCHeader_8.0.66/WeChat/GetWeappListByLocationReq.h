@class BaseRequest;

@interface GetWeappListByLocationReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) double longitude;
@property (nonatomic) double latitude;

+ (void)initialize;

@end
