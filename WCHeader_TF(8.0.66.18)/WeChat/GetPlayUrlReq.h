@class BaseRequest, NSString;

@interface GetPlayUrlReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *vid;
@property (retain, nonatomic) NSString *appmsgUrl;
@property (retain, nonatomic) NSString *previousPlayurl;

+ (void)initialize;

@end
