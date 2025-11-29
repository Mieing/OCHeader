@interface TTSystemApiSandbox : NSObject

@property (copy, nonatomic) id /* block */ mobileCountryCodeForDataServiceBlock;
@property (copy, nonatomic) id /* block */ mobileNetworkCodeForDataServiceBlock;

- (id)initWithMobileCountryCodeForDataServiceBlock:(id /* block */)a0 mobileNetworkCodeForDataServiceBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
