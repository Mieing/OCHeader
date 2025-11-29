@interface MMAlbumDataProviderForPHAssetFramework : NSObject

+ (void)AllMMAlbumsForPHFrameworkWith:(id /* block */)a0 errorBlock:(id /* block */)a1 options:(id)a2 callbackOnMainThread:(BOOL)a3;
+ (id)getAlbumFromAlbumType:(long long)a0 ForSubType:(long long)a1 options:(id)a2;
+ (id)getAlbumIdentifier:(id)a0 options:(id)a1;
+ (id)getAlbumIdentifiers:(id)a0 options:(id)a1;
+ (id)firstAlbumWithOptions:(id)a0;
+ (id)screenshotAlbum;
+ (id)getChangeInfoForResult:(id)a0 inOriginalAlbum:(id)a1;

@end
