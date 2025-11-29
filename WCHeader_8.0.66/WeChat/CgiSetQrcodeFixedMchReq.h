@class BaseRequest, NSString;

@interface CgiSetQrcodeFixedMchReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *fee;
@property (retain, nonatomic) NSString *desc;

+ (void)initialize;

@end
