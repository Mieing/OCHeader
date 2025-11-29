@class ACCEditBeautyEffectItemExtraBeautifyModel;

@interface ACCEditBeautyEffectItemExtraModel : NSObject

@property (readonly, nonatomic) BOOL isNone;
@property (readonly, nonatomic) BOOL isDefault;
@property (readonly, nonatomic) BOOL shouldDisableCache;
@property (readonly, nonatomic) BOOL isStyleStatus;
@property (readonly, nonatomic) BOOL isMultipersonStatus;
@property (readonly, nonatomic) ACCEditBeautyEffectItemExtraBeautifyModel *beautifyModel;

- (BOOL)p_getBOOLValueFromDict:(id)a0 key:(id)a1;
- (void)p_setupPropertiesWithExtraString:(id)a0 shouldUseComposerParams:(BOOL)a1 composerParamsStr:(id)a2;
- (void)fillBeautifyModelWithString:(id)a0;
- (void)p_generateBeautifyModelWithDict:(id)a0;
- (id)initWithExtraString:(id)a0 shouldUseComposerParams:(BOOL)a1 composerParamsStr:(id)a2;
- (void).cxx_destruct;

@end
