@class BaseRequest, NSString;

@interface GetInteractionADReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSString *uxinfo;
@property (nonatomic) int source;

+ (void)initialize;

@end
