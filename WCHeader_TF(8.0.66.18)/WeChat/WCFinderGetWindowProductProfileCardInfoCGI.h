@class NSString;

@interface WCFinderGetWindowProductProfileCardInfoCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;

- (id)initWithFinderUsername:(id)a0 reqScene:(unsigned int)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)createRequestWithScene:(unsigned int)a0;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
