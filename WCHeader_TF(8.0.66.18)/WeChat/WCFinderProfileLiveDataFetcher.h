@class WCFinderStreamLoadingState, NSString;

@interface WCFinderProfileLiveDataFetcher : NSObject <WCFinderProfileDataFetcher>

@property (retain, nonatomic) WCFinderStreamLoadingState *loadingState;
@property (nonatomic) BOOL isRequestingFristPage;
@property (nonatomic) unsigned long long refreshTime;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) long long cgiFlag;
@property (nonatomic) BOOL isAuthor;

- (id)init;
- (id)initWithLoadingState:(id)a0;
- (void)requestFirstPage:(id)a0 complete:(id /* block */)a1;
- (void)requestNextPage:(id)a0 complete:(id /* block */)a1;
- (void)_requestPage:(id)a0 firstPage:(BOOL)a1 compelte:(id /* block */)a2;
- (id)profileLoadingState;
- (void)profileRequestNextPage:(id)a0 complete:(id /* block */)a1;
- (void)profileRequestFirstPage:(id)a0 complete:(id /* block */)a1;
- (BOOL)feedListIgnoreContentVM:(id)a0;
- (void).cxx_destruct;

@end
