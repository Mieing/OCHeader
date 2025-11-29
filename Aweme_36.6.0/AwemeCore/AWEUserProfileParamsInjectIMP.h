@class NSString;

@interface AWEUserProfileParamsInjectIMP : NSObject <AWEUserProfileParamsInjectProtocol, AWESettingsAPIRequestModifier>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)extraParamsForURL:(id)a0;
- (id)userProfileParamsWithContext:(id)a0;

@end
