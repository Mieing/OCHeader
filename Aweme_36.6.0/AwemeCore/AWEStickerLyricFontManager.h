@interface AWEStickerLyricFontManager : NSObject

+ (id)formatFontDicWithJSONStr:(id)a0;
+ (void)fetchLyricFontResourceWithFontName:(id)a0 completion:(id /* block */)a1;
+ (void)downloadLyricFontIfNeeded;
+ (id)effectModelWithFontName:(id)a0;
+ (id)formatFontDicWithJSONStr:(id)a0 key:(id)a1;
+ (void)downloadLyricFontWithEffectModel:(id)a0 completion:(id /* block */)a1;
+ (void)fetchLyricFontEffectModelsWithCompletion:(id /* block */)a0;

@end
