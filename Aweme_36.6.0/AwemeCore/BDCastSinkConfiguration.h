@class NSData, NSString;

@interface BDCastSinkConfiguration : NSObject

@property (copy, nonatomic) NSData *licenseData;
@property (copy, nonatomic) NSString *projectId;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *rtcAppID;

- (void).cxx_destruct;

@end
