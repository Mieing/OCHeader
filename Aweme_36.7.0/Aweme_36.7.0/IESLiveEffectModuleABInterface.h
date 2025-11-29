@interface IESLiveEffectModuleABInterface : NSObject

+ (id)decorationPanelInterfaceWithDIContext:(id)a0;
+ (id)faceStickerInterfaceWithDIContext:(id)a0;
+ (id)audienceFaceStickerInterfaceWithDIContext:(id)a0;
+ (id)stickerInterfaceWithDIContext:(id)a0;
+ (id)beautyInterfaceWithDIContext:(id)a0;
+ (id)gestureStickerInterfaceWithDIContext:(id)a0;
+ (id)soundEffectInterfaceWithDIContext:(id)a0;
+ (id)guideBeautyInterfaceWithDIContext:(id)a0;
+ (id)audienceBeautyInterfaceWithDIContext:(id)a0;
+ (void)updateECommerceNoFilter:(BOOL)a0 completion:(id /* block */)a1 withDIContext:(id)a2;
+ (BOOL)getECommerceNoFilterWithDIContext:(id)a0;
+ (BOOL)getECommerceNoFilterDefaultOpenWithDIContext:(id)a0;

@end
