@class BaseRequest, NSString, TextStatusSignatureExtInfo;

@interface TextStatusGetBrandInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *activityToken;
@property (retain, nonatomic) TextStatusSignatureExtInfo *activityTokenExtInfo;

+ (void)initialize;

@end
