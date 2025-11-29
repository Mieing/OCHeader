@class BaseRequest, NSString, BusinessInfo;

@interface GetFuncMsgReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *functionMsgId;
@property (retain, nonatomic) NSString *customBuff;
@property (retain, nonatomic) NSString *openId;
@property (retain, nonatomic) BusinessInfo *businessInfo;

+ (void)initialize;

@end
