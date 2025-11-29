@class NSString;

@interface AMapMacAddressFinder : NSObject

@property (copy, nonatomic) NSString *AMF_macAddress;
@property (readonly, nonatomic) NSString *AMF_IPAddress;

+ (id)sharedInstance;

- (id)initWithSignlton;
- (id)_getMacAddressWithIP:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
