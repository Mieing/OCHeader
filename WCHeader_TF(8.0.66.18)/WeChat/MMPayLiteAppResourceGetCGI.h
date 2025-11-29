@class NSString, NSArray;

@interface MMPayLiteAppResourceGetCGI : WCPayBaseCgi

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *resourceName;
@property (retain, nonatomic) NSArray *localResources;
@property (copy, nonatomic) id /* block */ success;
@property (copy, nonatomic) id /* block */ fail;

- (id)initWithAppId:(id)a0 resourceName:(id)a1 localResouces:(id)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (void)createRequest;
- (id)assembleResourceInfo;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
