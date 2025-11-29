@class NSString;

@interface WCFinderCDNFileDumpCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *posterUsername;
@property (copy, nonatomic) NSString *clientId;
@property (copy, nonatomic) NSString *rawUrl;
@property (copy, nonatomic) NSString *fromAppId;
@property (copy, nonatomic) NSString *paramJson;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithPosterUsername:(id)a0 clientId:(id)a1 rawUrl:(id)a2 fromAppId:(id)a3 paramJson:(id)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
