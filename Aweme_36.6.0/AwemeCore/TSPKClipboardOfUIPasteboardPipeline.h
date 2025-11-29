@interface TSPKClipboardOfUIPasteboardPipeline : TSPKDetectPipeline

+ (id)stubbedClass;
+ (id)stubbedInstanceAPIs;
+ (BOOL)isGeneralPasteboardChangedWithName:(id)a0 pasteboardAPI:(id)a1;
+ (Class)pasteboardClass;
+ (long long)lastPasteboardChangeCount:(id)a0;
+ (void)preload;
+ (id)cacheKey:(id)a0;
+ (id)dataType;
+ (id)pipelineType;

- (BOOL)deferPreload;

@end
