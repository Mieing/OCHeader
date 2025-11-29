@class BaseRequest, NSString, NSMutableArray;

@interface SendSmsReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSMutableArray *categoryId;
@property (retain, nonatomic) NSString *payToken;
@property (retain, nonatomic) NSString *phoneId;
@property (retain, nonatomic) NSString *ticket;
@property (retain, nonatomic) NSString *bankType;
@property (retain, nonatomic) NSString *optionalMobile;

+ (void)initialize;

@end
