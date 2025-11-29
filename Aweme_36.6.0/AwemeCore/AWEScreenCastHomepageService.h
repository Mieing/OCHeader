@class NSNumber;

@interface AWEScreenCastHomepageService : AWEScreenCastContentBaseService

@property (retain, nonatomic) NSNumber *minCursor;

- (void)updateParams;
- (void)requestWithParams:(id)a0 pullType:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)path;

@end
