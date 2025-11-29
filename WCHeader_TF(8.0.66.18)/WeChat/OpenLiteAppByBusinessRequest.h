@class BaseRequest, NSString;

@interface OpenLiteAppByBusinessRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *sourceAppid;
@property (retain, nonatomic) NSString *businessType;

+ (void)initialize;

@end
