@class NSNumber, NSString;

@interface IESLivePCDNLaunchConfig : NSObject

@property (retain, nonatomic) NSNumber *businessId;
@property (copy, nonatomic) NSString *deviceId;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end
