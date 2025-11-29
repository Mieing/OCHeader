@class NSString;

@interface BDASDKConfig : NSObject

@property (copy, nonatomic) NSString *settingURL;

+ (id)sharedConfig;

- (id)sdkAppId;
- (void).cxx_destruct;

@end
