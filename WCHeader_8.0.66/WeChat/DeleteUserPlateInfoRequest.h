@class BaseRequest, NSString;

@interface DeleteUserPlateInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *plateNumber;

+ (void)initialize;

@end
