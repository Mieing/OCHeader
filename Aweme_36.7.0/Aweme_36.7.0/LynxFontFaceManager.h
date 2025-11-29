@class NSMutableDictionary;

@interface LynxFontFaceManager : NSObject {
    NSMutableDictionary *_registedFontMap;
    NSMutableDictionary *_registedAliasFontMap;
}

+ (id)getFontFeatureAttribute:(id)a0;
+ (id)getFontVariationAttribute:(id)a0 fontOpticalSizing:(BOOL)a1 fontSize:(double)a2;
+ (unsigned int)ConvertOpenTypeTagToInt:(id)a0;
+ (id)generateFontWithBaseFont:(id)a0 fontVariationSettings:(id)a1 fontFeatureSettings:(id)a2 fontOpticalSizing:(BOOL)a3;
+ (id)sharedManager;

- (id)generateFontWithSize:(double)a0 weight:(double)a1 style:(unsigned long long)a2 fontFamilyName:(id)a3 fontFaceContext:(id)a4 fontFaceObserver:(id)a5;
- (void)registerFont:(id)a0 forName:(id)a1;
- (void)registerFamilyName:(id)a0 withAliasName:(id)a1;
- (double)fontWeightOfFont:(id)a0;
- (BOOL)isFont:(id)a0 matchFontWeight:(double)a1;
- (BOOL)isFont:(id)a0 matchFontStyle:(unsigned long long)a1;
- (void)reportResourceError:(id)a0 withLynxView:(id)a1 resourceUrl:(id)a2;
- (void)onRequestErrorClearCache:(id)a0;
- (id)registerFontWithData:(id)a0 withCacheKey:(id)a1 lynxView:(id)a2;
- (BOOL)onRequestStartForItem:(id)a0 cache:(id)a1 fontFaceObserver:(id)a2;
- (void)handleFontData:(id)a0 withItem:(id)a1 lynxView:(id)a2 withCacheKey:(id)a3;
- (void)notifyFontFaceObserverWithItem:(id)a0 lynxFontFaceContext:(id)a1;
- (void)handleGenericResourceFetcherFontData:(id)a0 withError:(id)a1 withItem:(id)a2 lynxView:(id)a3 withCacheKey:(id)a4;
- (void)requestFontfaceByFontProviderWithItem:(id)a0 fontFaceContext:(id)a1 fontFaceObserver:(id)a2 cacheKey:(id)a3;
- (id)findFontWithSize:(double)a0 weight:(double)a1 style:(unsigned long long)a2 fontFamilyName:(id)a3 fontInfo:(struct _LynxInnerFontInfo { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } *)a4;
- (id)cachedKey:(id)a0;
- (void)requestFontfaceItem:(id)a0 fontFaceContext:(id)a1 fontFaceObserver:(id)a2 cacheKey:(id)a3;
- (id)generateUIFontWithSize:(double)a0 weight:(double)a1 style:(unsigned long long)a2 fontFamilyName:(id)a3 fontFaceContext:(id)a4 fontFaceObserver:(id)a5 fontInfo:(struct _LynxInnerFontInfo { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } *)a6;
- (BOOL)addFontAliasForFamilyName:(id)a0;
- (id)getRegisteredUIFont:(id)a0 fontSize:(double)a1;
- (void).cxx_destruct;
- (id)init;

@end
