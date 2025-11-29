@interface WCFinderRotationHelper : NSObject

+ (unsigned long long)transferToOrientationMaskFromOrientation:(long long)a0;
+ (long long)transferOrientationMaskToOrientation:(unsigned long long)a0;
+ (void)forceRotateToOrientation:(long long)a0 vc:(id)a1;
+ (void)startForcedRotationToPortraitWithVC:(id)a0;
+ (void)adjustCurrentSupportOrientationWith:(id)a0;
+ (unsigned long long)currentInterfaceOrientationMaskWithTarget:(id)a0;

- (void)dismissActionSheetWindowIfNeeded;

@end
