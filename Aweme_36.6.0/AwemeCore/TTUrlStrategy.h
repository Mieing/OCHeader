@class NSArray, NSString;

@interface TTUrlStrategy : NSObject

@property (retain) NSArray *cdnUrls;
@property char currUrlIndex;
@property (retain) NSString *currUrl;

+ (id)createUrlStrategy:(id)a0 cdnUrlsArray:(id)a1 urlStrategy:(long long)a2 firstSuccessUrl:(id)a3 isFallback2Http:(BOOL)a4;

- (id)getUrl;
- (void)updateUrlResult:(id)a0 error:(id)a1;
- (BOOL)isPcdnMode;
- (void).cxx_destruct;

@end
