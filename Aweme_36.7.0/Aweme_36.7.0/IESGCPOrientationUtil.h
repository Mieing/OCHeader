@interface IESGCPOrientationUtil : NSObject

+ (void)forceUpdateToOrientationPortrait:(id)a0 completion:(id /* block */)a1;
+ (void)updateSupportOrientationMaskPortrait:(id)a0;
+ (void)updateSupportOrientationMaskLandscapeRight:(id)a0;
+ (void)updateSupportOrientationMaskLandscapeLeft:(id)a0;
+ (BOOL)isiPadAutoRotateMode:(id)a0;
+ (void)rotateToOrientation:(long long)a0 diContext:(id)a1 completion:(id /* block */)a2;
+ (void)rotateToInterfaceOrientation:(long long)a0 diContext:(id)a1 completion:(id /* block */)a2;
+ (void)rotateToOrientation:(long long)a0 diContext:(id)a1 duration:(double)a2 completion:(id /* block */)a3;
+ (void)rotateToInterfaceOrientation:(long long)a0 duration:(double)a1 diContext:(id)a2 completion:(id /* block */)a3;
+ (long long)_interfaceOrientationFromGCPOrientation:(long long)a0;
+ (void)_updateMaskConfigForInterfaceOrientation:(long long)a0 diContext:(id)a1;
+ (void)_liveOrientationRotation:(long long)a0 diContext:(id)a1 completion:(id /* block */)a2;
+ (void)_commonOrientationRotation:(long long)a0;
+ (void)forceUpdateToOrientationLandscape:(id)a0 completion:(id /* block */)a1;
+ (void)forceUpdateToOrientationLandscapeLeft:(id)a0 completion:(id /* block */)a1;
+ (void)commonRotationToOrientation:(long long)a0 completion:(id /* block */)a1;
+ (unsigned long long)supportInterfaceOrientationMaskWithDIContext:(id)a0;
+ (long long)interfaceOrientationFromGCPOrientation:(long long)a0;
+ (long long)interfaceOrientation;

@end
