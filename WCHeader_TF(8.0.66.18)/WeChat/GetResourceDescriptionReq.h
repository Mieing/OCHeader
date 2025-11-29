@class BaseRequest, NSString, GetResourceDescriptionInfo;

@interface GetResourceDescriptionReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *ilinkAppid;
@property (retain, nonatomic) GetResourceDescriptionInfo *appReq;

+ (void)initialize;

@end
