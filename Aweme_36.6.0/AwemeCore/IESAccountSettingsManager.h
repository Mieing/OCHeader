@class NSDictionary;

@interface IESAccountSettingsManager : NSObject

@property (copy) NSDictionary *settings;

+ (id)sharedInstance;

- (void)updateSettings:(id)a0 fromCache:(BOOL)a1;
- (BOOL)enableNetworkCommonParams;
- (BOOL)enableSecSDKVersion;
- (void).cxx_destruct;
- (void)updateSettings:(id)a0;
- (id)init;

@end
