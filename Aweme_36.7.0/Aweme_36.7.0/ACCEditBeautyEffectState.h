@class ACCEditBeautyEffectStatusScope, ACCEditBeautyEffectRenderScope, ACCEditBeautyEffectSourceDataScope;

@interface ACCEditBeautyEffectState : ACCEditBeautyEffectScorageRoot

@property (readonly, nonatomic) ACCEditBeautyEffectStatusScope *statusScope;
@property (readonly, nonatomic) ACCEditBeautyEffectRenderScope *renderScope;
@property (readonly, nonatomic) ACCEditBeautyEffectSourceDataScope *sourceDataScope;

@end
