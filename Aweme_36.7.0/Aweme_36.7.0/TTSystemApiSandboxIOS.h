@interface TTSystemApiSandboxIOS : NSObject

@property (copy, nonatomic) id /* block */ mobileCountryCodeForDataServiceBlock;
@property (copy, nonatomic) id /* block */ mobileNetworkCodeForDataServiceBlock;

+ (id)shareInstance;

- (id)init;

@end
