@class NSObject;

@interface DeviceTokenForAliTech : NSObject

@property (retain, nonatomic) NSObject *securityDevice;

+ (int)getSession:(char *)a0 :(int)a1;
+ (id)getInstance;

- (id)mobileSession;
- (void)initDevice;
- (void).cxx_destruct;
- (id)init;

@end
