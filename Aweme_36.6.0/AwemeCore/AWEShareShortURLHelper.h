@interface AWEShareShortURLHelper : NSObject

+ (void)shortenURL:(id)a0 persistent:(BOOL)a1 completion:(id /* block */)a2;
+ (void)shortenURLWithContext:(id)a0 outExtraParams:(id)a1 persistent:(BOOL)a2 completion:(id /* block */)a3;
+ (id)linkStringFormatWithSplitWord:(id)a0 description:(id)a1 urlString:(id)a2;
+ (Class)aAWESharePrepareURLStageCommonAdapterClass;
+ (void)shortenURLWithContext:(id)a0 completion:(id /* block */)a1;
+ (id)jointRandomPrefixWithToken:(id)a0 targetType:(unsigned long long)a1;
+ (Class)aAWEShareServiceDOUYINLiteAdaperClass;
+ (id)belongString;
+ (void)fetchUrlWithParams:(id)a0 url:(id)a1 completion:(id /* block */)a2;
+ (void)trackShortenLinkFailWithURL:(id)a0 networkError:(id)a1;
+ (id)defaultPatternConfig;
+ (id)randomNumberString;
+ (id)defaultRandomPrefixTypes;

- (id)aAWESharePrepareURLStageCommonAdapter;
- (id)aAWEShareServiceDOUYINLiteAdaper;
- (void)addParametersToURLWithContext:(id)a0;

@end
