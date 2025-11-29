@class NSMutableDictionary;

@interface ACCGenericTemplateStickerGetPicHelper : NSObject

@property (retain, nonatomic) NSMutableDictionary *stickerMap;

+ (id)picWithSlot:(id)a0 matchType:(unsigned long long)a1 formatBlock:(id /* block */)a2;
+ (id)picForSocialWithSlot:(id)a0 avatarPath:(id)a1;
+ (id)picWithTextWidgetName:(id)a0 effectPath:(id)a1 matchType:(unsigned long long)a2 textTransformBlock:(id /* block */)a3;
+ (id)stickersForSocialWithSlot:(id)a0;
+ (id)picWithTextWidgetName:(id)a0 effectPath:(id)a1 matchType:(unsigned long long)a2 text:(id)a3;
+ (id)shared;

- (id)getMapWithEffectPath:(id)a0;
- (void)setMapWithObject:(id)a0 effectPath:(id)a1;
- (void).cxx_destruct;
- (void)cleanCache;
- (id)init;

@end
