@class NSString;

@interface IESLiveGameCPUIConfigServiceImpl : NSObject <IESGCPLiveUIConfigService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isiPadAutoRotateMode;
- (void)updateSupportOrientationMaskLandscapeLeft;
- (void)updateSupportOrientationMaskLandscapeRight;
- (void)updateSupportOrientationMaskPortrait;
- (BOOL)enableUpdateOrientationInLiveScene;
- (void)forceUpdateToOrientationProtraitWithCompletion:(id /* block */)a0;
- (void)forceUpdateToOrientationLandscapeWithCompletion:(id /* block */)a0;
- (void)forceUpdateToOrientationLandscapeLeftWithCompletion:(id /* block */)a0;

@end
