@class NSURL;

@interface RTVAPIWebServiceAccessConnector : RxWebServiceAccessConnector

@property (readonly, nonatomic) NSURL *baseURL;

- (void)rxAwakeFromPropertyInjection;
- (void).cxx_destruct;
- (id)init;
- (id)webServiceURL;

@end
