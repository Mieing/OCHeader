@class BaseRequest, NSString;

@interface UpdateSafeDeviceRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *deviceType;

+ (void)initialize;

@end
