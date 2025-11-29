@class NSString;

@interface WAMediaCastingUpnpDeviceService : NSObject

@property (copy, nonatomic) NSString *SCPDURL;
@property (copy, nonatomic) NSString *controlURL;
@property (copy, nonatomic) NSString *eventSubURL;
@property (copy, nonatomic) NSString *serviceId;
@property (copy, nonatomic) NSString *serviceType;

+ (id)deviceServiceWithInfo:(id)a0;

- (void).cxx_destruct;

@end
