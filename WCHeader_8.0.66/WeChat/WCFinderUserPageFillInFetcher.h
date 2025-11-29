@class NSString;
@protocol WCFinderProfileUserPageFetcher;

@interface WCFinderUserPageFillInFetcher : NSObject <WCFinderProfileUserPageFetcher>

@property (retain, nonatomic) id<WCFinderProfileUserPageFetcher> fetcher;
@property (nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetcherWithInner:(id)a0 ensureCount:(long long)a1;

- (id)userpageWithParams:(id)a0 successful:(id /* block */)a1 failure:(id /* block */)a2;
- (id)startFetch:(id)a0 data:(id)a1 retryCount:(long long)a2 successful:(id /* block */)a3 failure:(id /* block */)a4;
- (void).cxx_destruct;

@end
