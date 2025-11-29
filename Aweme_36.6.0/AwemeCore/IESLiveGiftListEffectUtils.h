@interface IESLiveGiftListEffectUtils : NSObject

+ (id)getGiftRequiredAssetsArrayWith:(id)a0;
+ (BOOL)checkSupportUseGift:(id)a0 freeDisplayIndex:(long long)a1 pageType:(unsigned long long)a2 isPushStreamUser:(BOOL)a3 giftManager:(id)a4;
+ (BOOL)effectHasModelRequirements:(id)a0;
+ (BOOL)enableFreeDisplayWithFreeDisplayIndex:(long long)a0 pageType:(unsigned long long)a1;

@end
