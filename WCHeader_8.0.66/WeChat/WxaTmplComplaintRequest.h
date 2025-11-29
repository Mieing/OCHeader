@class BaseRequest, NSString;

@interface WxaTmplComplaintRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *messageXml;

+ (void)initialize;

@end
