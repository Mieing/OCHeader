@interface IESLiveGiftStructCategoryUtils : NSObject

+ (BOOL)isLynxNormalGiftWithType:(long long)a0 resourceType:(long long)a1;
+ (BOOL)isLynxDegradedGiftWithType:(long long)a0 resourceType:(long long)a1;
+ (BOOL)hasGiftAssemblyInfoWithGiftId:(id)a0;
+ (BOOL)isValidLiteModel:(long long)a0 giftId:(long long)a1;
+ (BOOL)isStickerGiftWithType:(long long)a0;

@end
