@class NSArray, NSString;

@interface ACCRichTextEditorBackgroundManager : NSObject

@property (nonatomic) BOOL shouldFetchBgImageList;
@property (copy, nonatomic) NSArray *colorStyleModel;
@property (copy, nonatomic) NSArray *colorEffectStyleModel;
@property (copy, nonatomic) NSString *effectVersion;

+ (id)defaultColorStyleModelList;
+ (id)defaultColorStyleListV2;
+ (id)cacheOriginTextEffectVersion;
+ (void)saveCacheOriginTextEffectVersion:(id)a0;
+ (void)saveCacheOriginTextInsertColor:(id)a0;
+ (id)cacheOriginInsertColor;
+ (id)verifyFilePath:(id)a0;
+ (id)defaultColorStyleModelListV2;
+ (void)saveCacheOriginTextInsertBgConsumeStatus:(BOOL)a0;
+ (BOOL)cacheOriginInsertBgConsumeStatus;
+ (id)sharedInstance;

- (void)onClearCache;
- (void)fetchBgEffectListFrom:(id)a0;
- (id)defaultColorStyleList;
- (id)handleWithRichTextBgEffects:(id)a0 from:(id)a1;
- (id)fetchCacheColorStyleModelListWithBgKey:(id)a0 shouldForceInsert:(BOOL *)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
