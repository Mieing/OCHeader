@interface IESLiveIMByteLinkApiHttpHandler : NSObject

@property (copy, nonatomic) id /* block */ headerConfig;
@property (copy, nonatomic) id /* block */ timeoutConfig;
@property (copy, nonatomic) id /* block */ tokenConfig;
@property (copy, nonatomic) id /* block */ sdkVersionConfig;

- (void)sendApiByHTTPWithRequest:(id)a0 callback:(id /* block */)a1;
- (void)p_addCookieToParams:(id)a0;
- (void).cxx_destruct;

@end
