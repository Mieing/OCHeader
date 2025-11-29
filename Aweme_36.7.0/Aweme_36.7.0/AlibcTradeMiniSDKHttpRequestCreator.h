@interface AlibcTradeMiniSDKHttpRequestCreator : NSObject

+ (void)setHttpRequest:(id)a0 headerField:(id)a1;
+ (id)postRequestWithUrl:(id)a0 params:(id)a1 headerFields:(id)a2;
+ (id)getRequestWithUrl:(id)a0 headerFields:(id)a1;

@end
