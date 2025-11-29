@class BaseRequest, NSString;

@interface SwitchBrandReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *brandUserName;
@property (nonatomic) BOOL disable;

+ (void)initialize;

@end
