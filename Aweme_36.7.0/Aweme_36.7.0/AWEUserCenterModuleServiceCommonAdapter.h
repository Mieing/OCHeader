@class NSString;

@interface AWEUserCenterModuleServiceCommonAdapter : NSObject <AWEUserCenterModuleServiceCommonAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)checkIsLite;
+ (Class)weakTargetClass;

- (BOOL)checkIsLite;
- (id)weakTarget;

@end
