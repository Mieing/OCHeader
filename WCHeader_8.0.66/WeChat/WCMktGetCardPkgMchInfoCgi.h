@protocol WCMktGetCardPkgMchInfoCgiDelegate;

@interface WCMktGetCardPkgMchInfoCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCMktGetCardPkgMchInfoCgiDelegate> cgiDelegate;

- (id)initWithRequest:(id)a0 delegate:(id)a1;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
