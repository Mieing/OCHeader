@class NSNumber, NSString;

@interface HTSLiveFeedDataApi : HTSLiveApi

@property (retain, nonatomic) NSNumber *token;
@property (copy, nonatomic) NSString *url;

- (void)fetchInfoWith:(id)a0 parameters:(id)a1 finished:(id /* block */)a2;
- (void)fetchLiveTab:(id)a0 header:(id)a1 method:(unsigned long long)a2 finished:(id /* block */)a3;
- (void)fetch:(id)a0 method:(unsigned long long)a1 finished:(id /* block */)a2;
- (void)fetchVs:(id)a0 method:(unsigned long long)a1 finished:(id /* block */)a2;
- (id)buildRequestParams:(id)a0 method:(unsigned long long)a1;
- (void)fetchInfoWith:(id)a0 parameters:(id)a1 header:(id)a2 finished:(id /* block */)a3;
- (void)fetchFeedErrorWithURL;
- (void)fetchLiveTabInfoWith:(id)a0 parameters:(id)a1 header:(id)a2 finished:(id /* block */)a3;
- (void)fetchShowListWithParams:(id)a0 finished:(id /* block */)a1;
- (void)fetchFeedInnerCard:(id)a0 finished:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;

@end
