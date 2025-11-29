@class PushDescriptionInfo, BaseRequest, NSString, BatchGetResourceDescriptionInfo;

@interface BatchGetResourceDescriptionReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *ilinkAppid;
@property (retain, nonatomic) BatchGetResourceDescriptionInfo *appReq;
@property (retain, nonatomic) PushDescriptionInfo *pushAppReq;

+ (void)initialize;

@end
