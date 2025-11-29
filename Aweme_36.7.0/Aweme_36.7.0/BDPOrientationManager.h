@interface BDPOrientationManager : NSObject

@property (nonatomic) unsigned long long orientationMask;

+ (void)setSupportOrientationMask:(unsigned long long)a0 withScene:(id)a1;
+ (void)interfaceOrientationAdaptToMask:(unsigned long long)a0;
+ (void)interfaceOrientationAdaptTo:(long long)a0;
+ (void)bootstrapLaunch;
+ (unsigned long long)supportOrientationMask;
+ (BOOL)canSetSupportOrientationMask;
+ (BOOL)shouldAutorotateToSupportedOrientationMask:(unsigned long long)a0;
+ (unsigned long long)supportOrientationMaskForWindow:(id)a0;
+ (unsigned long long)infoPlistSupportedInterfaceOrientationMask;
+ (BOOL)isRotationAPIBanned;
+ (BOOL)interfaceOrientationMatchModelOrientation:(long long)a0 modelOrientation:(long long)a1;
+ (void)interfaceOrientationAdaptTo:(long long)a0 completion:(id /* block */)a1;
+ (void)p_interfaceOrientationAdaptTo:(long long)a0 completion:(id /* block */)a1;
+ (void)reduceWindowsLevel;
+ (void)restoreWindowLevel;
+ (id)stringWithUIInterfaceOrientation:(unsigned long long)a0;
+ (BOOL)interfaceOrientationIsEqualToOrientationMask:(unsigned long long)a0;
+ (BOOL)isSupportInterfaceOrientationMask:(unsigned long long)a0 forWindow:(id)a1;
+ (id)mainWindowScene;
+ (id)sharedManager;
+ (long long)interfaceOrientation;

@end
