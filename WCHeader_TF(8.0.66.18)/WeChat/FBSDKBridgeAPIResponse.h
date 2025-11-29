@class NSString, NSDictionary, NSError, FBSDKBridgeAPIRequest;

@interface FBSDKBridgeAPIResponse : NSObject <FBSDKCopying>

@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) FBSDKBridgeAPIRequest *request;
@property (readonly, copy, nonatomic) NSDictionary *responseParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgeAPIResponseWithRequest:(id)a0 error:(id)a1;
+ (id)bridgeAPIResponseWithRequest:(id)a0 responseURL:(id)a1 sourceApplication:(id)a2 error:(id *)a3;
+ (id)bridgeAPIResponseCancelledWithRequest:(id)a0;

- (id)initWithRequest:(id)a0 responseParameters:(id)a1 cancelled:(BOOL)a2 error:(id)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
