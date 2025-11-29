@class TMNetworkDetectCache, NSString;

@interface TMClipboardNetworkReadingCache : NSObject <TMNetworkContentDetectCacheProtocol>

@property (retain, nonatomic) TMNetworkDetectCache *clipboardCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)start;
+ (id)sharedInstance;

- (BOOL)detectedByContent:(id)a0 cacheParams:(id)a1;
- (void)asyncUpdateCacheWithClipboardString:(id)a0;
- (void)asyncUpdateCacheWithClipboardStrings:(id)a0;
- (void)asyncUpdateCacheWithClipboardItems:(id)a0;
- (void)asyncUpdateCacheWithClipboardURL:(id)a0;
- (void)asyncUpdateCacheWithClipboardURLs:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (id)cacheItems;

@end
