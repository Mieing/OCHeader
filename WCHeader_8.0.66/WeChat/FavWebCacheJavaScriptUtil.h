@interface FavWebCacheJavaScriptUtil : NSObject

+ (id)getHtmlContentAndFileUrlScript;
+ (id)getStorageScript;
+ (id)webViewDownloadScript:(id)a0;
+ (id)hookAjaxScript:(BOOL)a0;
+ (id)hookFetchAPIScript;
+ (id)hookDomScript;
+ (id)hookStorageScript:(id)a0;
+ (id)hookLocationScript:(id)a0;
+ (id)getTitleScript;
+ (id)getElementScriptAtPoint:(struct CGPoint { double x0; double x1; })a0 atView:(id)a1;
+ (id)existFileSrcScript:(id)a0;
+ (id)fixImgSrcScript;
+ (id)fixIframeScript;
+ (id)handleImgClickScript;

@end
