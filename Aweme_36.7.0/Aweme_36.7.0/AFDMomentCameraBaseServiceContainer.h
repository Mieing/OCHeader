@interface AFDMomentCameraBaseServiceContainer : ACCServiceIntegrateImpl

+ (id)sharedContainer;

- (id)provideSingletonACCMomentCameraLogService;
- (id)provideSingletonCMCUserService;

@end
