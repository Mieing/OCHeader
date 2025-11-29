@class NSString;

@interface AWEPOIModuleServiceDOUYINAdaper : NSObject <AWEPOIModuleServiceCommonAdapter>

@property (readonly, nonatomic) BOOL enableIM;
@property (readonly, nonatomic) BOOL haveSaaS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;

- (void)trackADEventAfterClickAnchorWithAweme:(id)a0 referString:(id)a1 entranceType:(long long)a2;
- (void)trackADEventAfterClickOrSlideUserAvatarWithAweme:(id)a0 referString:(id)a1;
- (void)trackAdEventWithLabelWithModel:(id)a0 name:(id)a1;
- (void)trackADEventAfterClickAnchorWithModel:(id)a0 referString:(id)a1 entranceType:(long long)a2;
- (id)weakTarget;

@end
