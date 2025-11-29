@class NSString;

@interface AWEGurdSettingsManagerCommonAdapter : NSObject <AWEGurdSettingsManagerCommonAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;
+ (void)aweGurdSettingsCacheManagerInjectJSONObjectWithDataFunction;

- (id)groupNamesArrayForRequestBlocklist;
- (id)poiGroupNamesArrayForRequestBlocklist;
- (id)channelsArrayForRequestBlocklist;
- (BOOL)useZstd;
- (id)weakTarget;

@end
