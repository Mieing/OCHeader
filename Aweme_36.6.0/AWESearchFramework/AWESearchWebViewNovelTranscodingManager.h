@interface AWESearchWebViewNovelTranscodingManager : NSObject

- (void)reportNovelTranscodeGetServerDataResult:(long long)a0 url:(id)a1 totalCost:(long long)a2 requestCost:(long long)a3 decryptCost:(long long)a4;
- (void)reportNovelTranscodeJSFetchResult:(BOOL)a0 url:(id)a1 injectTime:(long long)a2;

@end
