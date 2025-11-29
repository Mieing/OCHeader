@class BaseRequest, NSString;

@interface WecoinEntranceRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *reportSessionId;

+ (void)initialize;

@end
