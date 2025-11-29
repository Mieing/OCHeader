@class NSDictionary, FBSDKGraphRequest;

@interface FBSDKGraphRequestMetadata : NSObject

@property (retain, nonatomic) FBSDKGraphRequest *request;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSDictionary *batchParameters;

- (id)initWithRequest:(id)a0 completionHandler:(id /* block */)a1 batchParameters:(id)a2;
- (void)invokeCompletionHandlerForConnection:(id)a0 withResults:(id)a1 error:(id)a2;
- (id)description;
- (void).cxx_destruct;

@end
