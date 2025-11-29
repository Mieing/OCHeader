@class NSCache;

@interface IESECLiveSkinUtils : NSObject

@property (retain, nonatomic) NSCache *cardSkinConfigCache;
@property (retain, nonatomic) NSCache *listSkinConfigCache;
@property (retain, nonatomic) NSCache *promotionCardSkinConfigCache;

+ (id)cardSkinConfigWithThemes:(id)a0;
+ (id)promotionCardSkinConfigWithThemes:(id)a0;
+ (id)listSkinConfigWithThemes:(id)a0;
+ (id)setupNewCache;
+ (id)keyForThemesArray:(id)a0;
+ (id)skinConfigWithThemes:(id)a0 module:(id)a1 normalConfig:(id)a2;
+ (void)updateGoodsListSkinConfigByUIConfigIfBigFont:(id)a0;
+ (void)updatePromotionCardSkinConfigByUIConfigIfBigFont:(id)a0;
+ (id)sharedInstance;
+ (id)mergeDictionary:(id)a0 withDictionary:(id)a1;

- (void).cxx_destruct;

@end
