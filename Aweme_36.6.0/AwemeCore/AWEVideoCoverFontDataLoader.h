@class NSArray;

@interface AWEVideoCoverFontDataLoader : NSObject

@property (nonatomic) BOOL shouldFetchFontList;
@property (copy, nonatomic) NSArray *stickerFonts;
@property (nonatomic) long long state;

+ (id)fontWithModel:(id)a0 size:(double)a1;
+ (void)downloadFontWithModel:(id)a0 completion:(id /* block */)a1;
+ (id)fontFilePath:(id)a0;
+ (void)removeCachedEffectWithId:(id)a0;
+ (id)loadFontWithFontPath:(id)a0 size:(double)a1 completion:(id /* block */)a2;
+ (id)cachedEffectWithID:(id)a0;
+ (void)downloadEffect:(id)a0 fontModel:(id)a1 completion:(id /* block */)a2;
+ (void)trackWithError:(id)a0 extraInfo:(id)a1;
+ (id)panelName;

- (id)handleWithFontEffects:(id)a0;
- (void)onClearCache;
- (void)fetchFontEffectList;
- (void).cxx_destruct;
- (id)init;

@end
