@class BaseRequest, NSString;

@interface UpdateMyDeviceAttrReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *devicetype;
@property (retain, nonatomic) NSString *deviceid;
@property (retain, nonatomic) NSString *alias;
@property (nonatomic) unsigned int maindevice;

+ (void)initialize;

@end
