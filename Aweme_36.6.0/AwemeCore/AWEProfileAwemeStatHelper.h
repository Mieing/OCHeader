@interface AWEProfileAwemeStatHelper : NSObject

+ (void)changedAwemeDiggStateWithModels:(id)a0 itemID:(id)a1 isDigged:(BOOL)a2;
+ (void)changedAwemeFavoriteStateWithModels:(id)a0 itemID:(id)a1 isFavorited:(BOOL)a2;
+ (void)changeAwemeDiggStateWith:(id)a0 isDigged:(BOOL)a1;
+ (void)changeAwemeFavoriteStateWith:(id)a0 isFavorited:(BOOL)a1;

@end
