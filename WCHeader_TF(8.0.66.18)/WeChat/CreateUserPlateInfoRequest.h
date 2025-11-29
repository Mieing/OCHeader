@class BaseRequest, NSString;

@interface CreateUserPlateInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *plateNumber;

+ (void)initialize;

@end
