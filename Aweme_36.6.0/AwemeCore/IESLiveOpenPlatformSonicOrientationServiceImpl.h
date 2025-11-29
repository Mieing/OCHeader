@class NSDictionary, IESLiveOpenPlatformSonicPanel, NSString;
@protocol IESLiveOpenPlatformSonicOrientationServiceImplDelegate, IESLiveOrientationConfig;

@interface IESLiveOpenPlatformSonicOrientationServiceImpl : NSObject <IESLiveOpenPlatformSonicOrientationService>

@property (retain, nonatomic) id<IESLiveOrientationConfig> orientationConfig;
@property (nonatomic) BOOL isResume;
@property (nonatomic) unsigned long long changeStyle;
@property (retain, nonatomic) NSDictionary *backgroundChangeDict;
@property (weak, nonatomic) IESLiveOpenPlatformSonicPanel *panel;
@property (weak, nonatomic) id<IESLiveOpenPlatformSonicOrientationServiceImplDelegate> delegate;
@property (nonatomic) unsigned long long currentStyle;
@property (nonatomic) BOOL toasting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)a0;
- (void)deviceOrientationDidChange;
- (void)enableShouldAutorotate:(BOOL)a0;
- (void)addDeviceOrientationChangeNoti;
- (void)switchSoincConatinerStyle:(unsigned long long)a0 canCallbackToDevelperBlock:(id /* block */)a1;
- (void)interfaceOrientationDidChange;
- (void)_switchSoincConatinerStyle:(unsigned long long)a0;
- (void)switchDeviceOrientation:(long long)a0;
- (void)portraitFullToPanelLayout;
- (void)landscapeFullToPanelLayout;
- (void)panelToPortraitFullLayout;
- (void)landscapeFullToPortraitFullLayout;
- (void)panelOrPortraitFullToLandscapeFullLayout;
- (void)showPanelMaskIfNeeded;
- (void)resumeOrientationStyle;
- (void)switchDeviceOrientationToPortrait;
- (void).cxx_destruct;
- (void)dealloc;

@end
