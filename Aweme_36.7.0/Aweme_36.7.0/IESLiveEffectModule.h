@class NSString;

@interface IESLiveEffectModule : IESLiveModule <IESLiveRoomEffectService, IESLiveEffectModule>

@property (readonly, nonatomic) BOOL hasBeautyInfo;
@property (readonly, nonatomic) BOOL hasMakeupInfo;
@property (readonly, nonatomic) BOOL hasFilterInfo;
@property (readonly, nonatomic) BOOL isFilterIntensityChanged;
@property (readonly, nonatomic) BOOL isOriginFilterIntensity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cameraDidSet;
- (id)stickerInterface;
- (void)updateECommerceNoFilter:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)getECommerceNoFilter;
- (BOOL)getECommerceNoFilterDefaultOpen;
- (id)provideServices;
- (id)faceStickerInterface;
- (id)beautyInterface;
- (id)gestureStickerInterface;
- (id)soundEffectInterface;
- (id)guideBeautyInterface;
- (id)decorationPanelInterface;
- (id)audienceBeautyInterface;
- (id)audienceFaceStickerInterface;
- (id)effectBeautyService;
- (BOOL)enableAudienceNoFilterLabel;

@end
