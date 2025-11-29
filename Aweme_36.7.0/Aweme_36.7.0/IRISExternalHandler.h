@interface IRISExternalHandler : NSObject

@property (copy, nonatomic) id /* block */ externalInterceptionBlock;
@property (copy, nonatomic) id /* block */ batchUploadTaskOptionsSetterBlock;
@property (copy, nonatomic) id /* block */ onBasicHTTPBodyBlock;
@property (copy, nonatomic) id /* block */ dataFilterBlock;
@property (copy, nonatomic) id /* block */ onError;
@property (copy, nonatomic) id /* block */ defaultEndpointBlock;
@property (copy, nonatomic) id /* block */ onExternalNetworkProvider;
@property (copy, nonatomic) id /* block */ onConfigurationChanged;
@property (copy, nonatomic) id /* block */ defaultIntervalBlock;

- (void).cxx_destruct;

@end
