@class NSDate;

@interface CSJSDKMonitor : NSObject

@property long long showCount;
@property (retain, nonatomic) NSDate *sdkInitDate;
@property (nonatomic) unsigned long long currentSDKStartType;

- (void)showCountIncrement;
- (id)ads_parameter_dictionaryValue;
- (void).cxx_destruct;
- (id)init;
- (void)applicationDidEnterBackgroundNotification;

@end
