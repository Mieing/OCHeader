@class NSString;

@interface AWEInfraConfigModuleServiceCommonAdapter : NSObject <AWEInfraConfigModuleServiceCommonAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;
+ (id)getDefaultLanguageName;
+ (BOOL)newLTCPreloadEnable;
+ (id)toutiaoKey;
+ (id)targetImageName;
+ (id)appID;

- (id)getChannelID;
- (id)weakTarget;

@end
