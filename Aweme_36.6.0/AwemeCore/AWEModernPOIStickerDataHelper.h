@class NSString;

@interface AWEModernPOIStickerDataHelper : NSObject <ACCModernPOIStickerDataHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)prefetchDefaultPOIStyleResourceIfNeeded;
+ (void)fetchEffectWithEffectIds:(id)a0 defaultIndex:(unsigned long long)a1 completionBlock:(id /* block */)a2;
+ (void)fetchEffectWithModel:(id)a0 completionBlock:(id /* block */)a1;
+ (id)generateTextParamsWithPOIName:(id)a0 effectPath:(id)a1 effectModel:(id)a2;
+ (void)saveBasicEffects:(id)a0;
+ (id)basicEffectIds;
+ (id)commonEffectIds;
+ (id)standardEffectIds;
+ (id)optimizeTextParams:(id)a0;
+ (id)p_fetchDefaultFontFilePath;
+ (void)p_fetchDefaultEffectPath;
+ (id)p_dictTransferFromString:(id)a0;
+ (id)p_RGBAArrayTransferFromColorString:(id)a0;

- (BOOL)isSpecialEffect:(id)a0;

@end
