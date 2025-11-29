@class NSString, NSURL;

@interface KSUPnPDeviceService : NSObject

@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSString *serviceId;
@property (retain, nonatomic) NSURL *SCPDURL;
@property (retain, nonatomic) NSURL *controlURL;
@property (retain, nonatomic) NSURL *eventSubURL;

- (id)description;
- (void).cxx_destruct;

@end
