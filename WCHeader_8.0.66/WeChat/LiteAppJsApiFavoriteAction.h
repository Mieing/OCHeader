@interface LiteAppJsApiFavoriteAction : LiteAppJsApi

- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (BOOL)checkIdentifierPrefixWith:(id)a0;
- (void)addFavoritesItemByParam:(id)a0;
- (void)delFavoritesItemByParam:(id)a0;
- (id)getLiteAppItemFrom:(id)a0;

@end
