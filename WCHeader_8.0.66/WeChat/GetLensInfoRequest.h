@class BaseRequest, NSString;

@interface GetLensInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *lensId;

+ (void)initialize;

@end
