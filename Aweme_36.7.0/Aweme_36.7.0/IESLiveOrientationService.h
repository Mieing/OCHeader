@class NSNumber, IESLiveOrientationServiceImpl, NSString;

@interface IESLiveOrientationService : IESLiveGeneralBaseService <IESLiveOrientationService>

@property (retain, nonatomic) IESLiveOrientationServiceImpl *impl;
@property (retain, nonatomic) NSNumber *disableLandscape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)serviceRoomDataReady:(id)a0;
- (void)setLandscapeStatus:(BOOL)a0;
- (BOOL)currentRoomIsLandscapeEnableNowWithDIContext:(id)a0;
- (BOOL)couldDisableLandscapeMission;
- (void)setFullScreen:(BOOL)a0;
- (BOOL)isFullScreen;
- (void).cxx_destruct;
- (BOOL)isLandscape;

@end
