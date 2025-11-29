@interface AlibcTradeMiniSDKHttpHelper : NSObject

+ (id)sharedHelper;

- (void)sendPostRequest:(id)a0 headerFields:(id)a1 params:(id)a2 successCallback:(id /* block */)a3 failedCallback:(id /* block */)a4;
- (void)sendGetRequest:(id)a0 headerFields:(id)a1 successCallback:(id /* block */)a2 failedCallback:(id /* block */)a3;

@end
