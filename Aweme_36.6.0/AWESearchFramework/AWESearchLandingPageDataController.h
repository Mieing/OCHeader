@class NSString;

@interface AWESearchLandingPageDataController : AWEListDataController

@property (nonatomic) long long limit;
@property (nonatomic) long long offset;
@property (retain, nonatomic) id responseModel;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *alasrc;

- (void)fetchLandingPageData:(unsigned long long)a0 keyword:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
