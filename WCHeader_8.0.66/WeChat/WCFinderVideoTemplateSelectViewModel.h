@interface WCFinderVideoTemplateSelectViewModel : WCFinderVideoTemplateSelectBasicViewModel

+ (id)tempPath;
+ (id)tempLocalUrlOfDemoVideoUrl:(id)a0;
+ (void)downloadCacheWithUrl:(id)a0;

- (id)initWithParams:(id)a0;
- (void)ensureCachePath;
- (id)mmkvKey;

@end
