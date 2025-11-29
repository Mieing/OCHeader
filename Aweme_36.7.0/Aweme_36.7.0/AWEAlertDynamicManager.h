@class NSDictionary;

@interface AWEAlertDynamicManager : NSObject

@property (copy, nonatomic) NSDictionary *alertUpdatedConfigMap;

- (void)cleanConfigCaches;
- (void)updateConfigIfNeeded;
- (BOOL)dynamicDisabled;
- (void)updateAlertBeforeAddAlert:(id)a0 alertID:(id)a1;
- (void).cxx_destruct;

@end
