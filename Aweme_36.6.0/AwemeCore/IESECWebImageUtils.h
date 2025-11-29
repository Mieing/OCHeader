@interface IESECWebImageUtils : NSObject

+ (id)safeURL:(id)a0;
+ (id)filterSafeURLs:(id)a0;
+ (id)getBizTagWithURL:(id)a0;
+ (id)getUrlQueryItem:(id)a0 url:(id)a1;
+ (id)getSceneTagWithURL:(id)a0;
+ (id)remakeImageUrl:(id)a0 identifier:(id)a1;
+ (id)safeURLStr:(id)a0;
+ (id)filterSafeURLsStrings:(id)a0;
+ (BOOL)enableRequestPerformance;
+ (id)findImageTemplateForUrl:(id)a0;
+ (BOOL)enableRemakeTemplate;
+ (id)findServiceForUrl:(id)a0;
+ (id)remakeTemplateForImageUrlArray:(id)a0 bizTag:(id)a1 sceneTag:(id)a2 preferredSize:(struct CGSize { double x0; double x1; })a3 isPreview:(BOOL)a4;
+ (BOOL)isFirstScreenAndFromCache:(id)a0;
+ (BOOL)enablePreloadAllFrame;
+ (id)optimizeConfigValueForKey:(id)a0;
+ (BOOL)optimizeConfigBoolValueForKey:(id)a0;
+ (id)templateWidthOptions;
+ (long long)optimizePreferredSizeOffset;
+ (BOOL)useSystemPreferredSizeScale;
+ (BOOL)enableUrlRemakeCache;
+ (unsigned long long)imageTemplateLocationForUrl:(id)a0;
+ (BOOL)enableEcomTemplateForUrl:(id)a0;
+ (id)identifierForImageUrl:(id)a0 bizTag:(id)a1 sceneTag:(id)a2 preferredSize:(struct CGSize { double x0; double x1; })a3;
+ (id)remakeImageUrl:(id)a0 templateRule:(id)a1 preferredSize:(struct CGSize { double x0; double x1; })a2;
+ (struct { long long x0; long long x1; })optimizePreferredSize:(struct CGSize { double x0; double x1; })a0;
+ (id)p_matchString:(id)a0 pattern:(id)a1;
+ (id)p_subString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)p_createTemplateStr:(id)a0 templateFormat:(id)a1 preferredSize:(struct CGSize { double x0; double x1; })a2;
+ (struct { long long x0; long long x1; })optimizePreferredSize:(struct CGSize { double x0; double x1; })a0 templateFormat:(id)a1 scale:(double)a2;
+ (BOOL)containImageTemplateForUrl:(id)a0;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 description:(id)a2;

@end
