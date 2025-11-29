@class NSString;

@interface IESLiveVSControlServiceImpl : IESLiveGeneralBaseService <IESLiveVSControlModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (BOOL)isVSStreamVertical;
- (id)liveSeekContainerRouter;
- (id)liveMultitabInterface;
- (long long)currentStreamDeviceStatus;
- (BOOL)isVSStreamVerticalDevicePortait;
- (BOOL)isVSStreamVerticalDeviceLandscape;
- (BOOL)isVSStreamHorizontalDevicePortait;
- (BOOL)isVSStreamHorizontalDeviceLandscape;
- (BOOL)isPhoneLandcape;
- (BOOL)isPadRotateLandscape;
- (BOOL)isLandcape;
- (id)audienceBrightnessVolumeGestureRouter;
- (id)audienceBrightnessVolumeRouter;
- (BOOL)isPad;
- (BOOL)isPhone;
- (long long)currentInterfaceOrientation;

@end
