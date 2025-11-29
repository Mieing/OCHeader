@class NSArray, NSString;

@interface TTUrlStrategyOnlyFallbackCdn : TTUrlStrategy

@property (retain) NSArray *pcdnUrls;
@property long long currCdnType;
@property BOOL isFirst;
@property BOOL isTryNextUrl;
@property (retain) NSString *firstSuccessUrl;

- (id)getUrl;
- (void)updateUrlResult:(id)a0 error:(id)a1;
- (BOOL)isPcdnMode;
- (id)getFirstUrl;
- (id)getNextUrl;
- (id)initWithParam:(id)a0 cdnUrlsArray:(id)a1 firstSuccessUrl:(id)a2;
- (char)getUrlIndex;
- (void).cxx_destruct;
- (void)dealloc;

@end
