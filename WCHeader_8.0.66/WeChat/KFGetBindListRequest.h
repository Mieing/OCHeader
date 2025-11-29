@class BaseRequest, NSString;

@interface KFGetBindListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *kfBrandUsername;
@property (retain, nonatomic) NSString *customerUsername;

+ (void)initialize;

@end
