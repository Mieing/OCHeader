@class NSString;

@interface IESLiveRoomEffectServiceImpl : IESLiveGeneralBaseService <IESLiveRoomEffectService>

@property (readonly, nonatomic) BOOL hasBeautyInfo;
@property (readonly, nonatomic) BOOL hasMakeupInfo;
@property (readonly, nonatomic) BOOL hasFilterInfo;
@property (readonly, nonatomic) BOOL isFilterIntensityChanged;
@property (readonly, nonatomic) BOOL isOriginFilterIntensity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)cameraDidSet;
- (id)effectBeautyService;

@end
