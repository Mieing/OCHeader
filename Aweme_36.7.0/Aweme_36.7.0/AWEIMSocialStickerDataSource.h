@interface AWEIMSocialStickerDataSource : NSObject

- (id)storageKey:(BOOL)a0;
- (id)placeholderStickerModel;
- (void)fetchStickerListIsPrivateChat:(BOOL)a0 firstPageCount:(long long)a1 completion:(id /* block */)a2;
- (id)lastCachedStickerModel:(BOOL)a0;

@end
