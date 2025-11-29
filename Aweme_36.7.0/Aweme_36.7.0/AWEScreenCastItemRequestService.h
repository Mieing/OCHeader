@class NSString, TTVideoEngineInfoFetcher, AWEScreenCastItemRequest;
@protocol AWEScreenCastItemRequestServiceDelegate;

@interface AWEScreenCastItemRequestService : NSObject <TTVideoInfoFetcherDelegate>

@property (retain, nonatomic) TTVideoEngineInfoFetcher *infoFetcher;
@property (retain, nonatomic) AWEScreenCastItemRequest *curRequest;
@property (weak, nonatomic) id<AWEScreenCastItemRequestServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)v2VideoApiURL;
+ (id)videoURLV2ApiWithPlayAuthToken:(id)a0;

- (void)infoFetcherDidFinish:(long long)a0;
- (void)infoFetcherDidFinish:(id)a0 error:(id)a1;
- (void)infoFetcherShouldRetry:(id)a0;
- (void)infoFetcherDidCancel;
- (void)infoFetcherFinishWithDNSError:(id)a0;
- (void)fetchWithVideoID:(id)a0 token:(id)a1 businessToken:(id)a2 apiVersion:(unsigned long long)a3;
- (void)fetchCastItemWithRequest:(id)a0;
- (void).cxx_destruct;

@end
