@class NSString;

@interface AWEUserRecommendModuleServiceDOUYINAdaper : NSObject <AWEUserRecommendModuleServiceCommonAdapter, AWEUserRecommendModuleServiceDOUYINAdaper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;

- (BOOL)canShowFamiliarPopupInLite;
- (BOOL)isInLite;
- (id)weakTarget;

@end
