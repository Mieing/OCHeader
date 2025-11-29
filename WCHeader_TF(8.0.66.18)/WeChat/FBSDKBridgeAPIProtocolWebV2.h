@class NSString, FBSDKBridgeAPIProtocolNativeV1;

@interface FBSDKBridgeAPIProtocolWebV2 : NSObject <FBSDKBridgeAPIProtocol> {
    FBSDKBridgeAPIProtocolNativeV1 *_nativeProtocol;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)_redirectURLWithActionID:(id)a0 methodName:(id)a1 error:(id *)a2;
- (id)_requestURLForDialogConfiguration:(id)a0 error:(id *)a1;
- (id)requestURLWithActionID:(id)a0 scheme:(id)a1 methodName:(id)a2 methodVersion:(id)a3 parameters:(id)a4 error:(id *)a5;
- (id)responseParametersForActionID:(id)a0 queryParameters:(id)a1 cancelled:(BOOL *)a2 error:(id *)a3;
- (void).cxx_destruct;

@end
