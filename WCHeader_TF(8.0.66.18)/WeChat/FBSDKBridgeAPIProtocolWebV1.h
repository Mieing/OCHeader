@class NSString;

@interface FBSDKBridgeAPIProtocolWebV1 : NSObject <FBSDKBridgeAPIProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)requestURLWithActionID:(id)a0 scheme:(id)a1 methodName:(id)a2 methodVersion:(id)a3 parameters:(id)a4 error:(id *)a5;
- (id)responseParametersForActionID:(id)a0 queryParameters:(id)a1 cancelled:(BOOL *)a2 error:(id *)a3;

@end
