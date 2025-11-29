@class NSMutableArray;

@interface ACCVoiceEffectFavoriteDataSource : ACCVoiceEffectCategoryDataSource

@property (retain, nonatomic) NSMutableArray *effectIDList;
@property (retain, nonatomic) NSMutableArray *waitFavoriteList;
@property (retain, nonatomic) NSMutableArray *waitUnfavoriteList;
@property (nonatomic) BOOL syncFavorite;
@property (nonatomic) BOOL syncUnFavorite;
@property (copy, nonatomic) id /* block */ findLinkageItem;

- (void)deleteFavorite:(id)a0;
- (void)addToFavorite:(id)a0;
- (void)syncFavoriteListIfNeeded;
- (void)reAddFavoriteOprList:(id)a0;
- (void)syncUnfavoriteListIfNeeded;
- (void)reAddUnfavoriteOprList:(id)a0;
- (void)changeItemFavoriteStatus:(id)a0;
- (void)setupWithEffects:(id)a0;
- (BOOL)itemInFavoriteList:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateItems:(id)a0;

@end
