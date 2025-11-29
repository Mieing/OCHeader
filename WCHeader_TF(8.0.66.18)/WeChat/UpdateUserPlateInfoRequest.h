@class BaseRequest, NSString;

@interface UpdateUserPlateInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *oldPlateNumber;
@property (retain, nonatomic) NSString *newPlateNumber;

+ (void)initialize;

@end
