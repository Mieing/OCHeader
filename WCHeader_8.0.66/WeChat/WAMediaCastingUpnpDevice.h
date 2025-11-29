@class NSString, NSURL, NSDictionary;
@protocol WAMediaCastingUpnpDeviceService;

@interface WAMediaCastingUpnpDevice : NSObject

@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *usn;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *friendlyName;
@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSString *modelNumber;
@property (copy, nonatomic) NSString *modelDescription;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSURL *commandBaseURL;
@property (retain, nonatomic) NSDictionary<WAMediaCastingUpnpDeviceService> *servicesDictionary;
@property (copy, nonatomic) NSString *XMLString;

+ (id)deviceWithLocation:(id)a0 usn:(id)a1 uuid:(id)a2 data:(id)a3 address:(id)a4;
+ (id)deviceIDWithUUID:(id)a0 address:(id)a1;

- (id)description;
- (id)commandURLWithServiceType:(id)a0;
- (id)SOAPActionWithCommandName:(id)a0 serviceType:(id)a1;
- (void).cxx_destruct;

@end
