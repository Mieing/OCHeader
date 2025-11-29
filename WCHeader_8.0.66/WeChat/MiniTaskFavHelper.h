@interface MiniTaskFavHelper : NSObject

+ (BOOL)canAddToFav:(id)a0;
+ (void)addMiniTaskToFav:(id)a0 startLoading:(id /* block */)a1 complete:(id /* block */)a2;
+ (void)addFavItem:(id)a0;

@end
