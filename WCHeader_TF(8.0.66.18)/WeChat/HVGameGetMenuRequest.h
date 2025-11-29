@class BaseRequest, NSString;

@interface HVGameGetMenuRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *lang;
@property (retain, nonatomic) NSString *country;

+ (void)initialize;

@end
