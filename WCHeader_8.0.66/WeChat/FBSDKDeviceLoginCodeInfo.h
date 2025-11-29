@class NSString, NSURL, NSDate;

@interface FBSDKDeviceLoginCodeInfo : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *loginCode;
@property (readonly, copy, nonatomic) NSURL *verificationURL;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) unsigned long long pollingInterval;

- (id)initWithIdentifier:(id)a0 loginCode:(id)a1 verificationURL:(id)a2 expirationDate:(id)a3 pollingInterval:(unsigned long long)a4;
- (void).cxx_destruct;

@end
