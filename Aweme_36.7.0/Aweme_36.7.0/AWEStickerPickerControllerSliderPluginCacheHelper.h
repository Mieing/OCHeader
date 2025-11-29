@class NSString;

@interface AWEStickerPickerControllerSliderPluginCacheHelper : NSObject

@property (retain, nonatomic) NSString *prefix;
@property (retain, nonatomic) NSString *kEffectIDs;

- (void)cacheEffectId:(id)a0 withBeautyValue:(id)a1 filterValue:(id)a2;
- (id)getCachedFilterValueForEffectId:(id)a0;
- (id)getCachedBeautyValueForEffectId:(id)a0;
- (id)getCachedEffectIDs;
- (id)getCachedBeautyFilterDictForEffectId:(id)a0;
- (id)generateKeyForEffectID:(id)a0;
- (void)cacheEffectIDsWithAppendId:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
