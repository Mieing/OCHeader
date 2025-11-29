@class NSDictionary, NSArray;

@interface TMPrivacyPermissionConfig : TMModuleConfig

@property (copy, nonatomic) NSDictionary *permissionApiMap;
@property (copy, nonatomic) NSArray *requestPermissionApis;
@property (nonatomic) BOOL shouldAsyncPermissionRequestLog;

+ (id)configKey;

- (Class)moduleClass;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
