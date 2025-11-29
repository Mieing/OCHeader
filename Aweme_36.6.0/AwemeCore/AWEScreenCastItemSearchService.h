@class NSNumber;

@interface AWEScreenCastItemSearchService : AWEScreenCastContentBaseService

@property (copy, nonatomic) NSNumber *cursor;

- (void)requestWithParams:(id)a0 pullType:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)path;

@end
