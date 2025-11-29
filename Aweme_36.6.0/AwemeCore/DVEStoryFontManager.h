@class NSString, NSArray;

@interface DVEStoryFontManager : NSObject

@property (nonatomic) BOOL shouldFetchFontList;
@property (retain, nonatomic) NSString *effectPanel;
@property (retain, nonatomic) NSArray *stickerFonts;

- (id)fontWithModel:(id)a0 size:(double)a1;
- (id)handleWithFontEffects:(id)a0;
- (void)downloadFontWithModel:(id)a0 completion:(id /* block */)a1;
- (void)downloadFontWithModelWithHighPriority:(id)a0 completion:(id /* block */)a1;
- (void)prefetchFontEffects;
- (void)prefetchFontEffectsWithCompletion:(id /* block */)a0;
- (id)fontFilePath:(id)a0;
- (long long)operationQueueOfPriority:(long long)a0;
- (void)onClearCache;
- (void)fetchFontEffectList;
- (void)removeCachedEffectWithId:(id)a0;
- (id)cachedEffectWithID:(id)a0;
- (id)interactionStcikerFontNames;
- (BOOL)shouldExtraPreDownloadFont:(id)a0;
- (void)fetchFontEffectListWithCompletion:(id /* block */)a0;
- (id)loadFontFromData:(id)a0 fontPath:(id)a1 size:(double)a2 completion:(id /* block */)a3;
- (void)downloadEffect:(id)a0 forFontModel:(id)a1 priority:(long long)a2 completion:(id /* block */)a3;
- (void)downloadFontWithModel:(id)a0 priority:(long long)a1 completion:(id /* block */)a2;
- (id)initWithFontPanle:(id)a0;
- (void).cxx_destruct;

@end
