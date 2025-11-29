@class ZimGatewayForPop, NSString;

@interface AliyunFaceAuthRPC : NSObject <DTFRPCProxyProtocol>

@property (retain, nonatomic) ZimGatewayForPop *gatewayForPop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)zimInit:(id)a0 completionBlock:(id /* block */)a1;
- (void)zimValidate:(id)a0 completionBlock:(id /* block */)a1;
- (void)zimNFCValidate:(id)a0 completionBlock:(id /* block */)a1;
- (void)zimOCRIdentify:(id)a0 completionBlock:(id /* block */)a1;
- (void)zimFileUpload:(id)a0 completionBlock:(id /* block */)a1;
- (void)uploadFileWthParams:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)dictionaryIsContainKey:(id)a0 key:(id)a1;
- (id)getValueFromeDict:(id)a0 forKey:(id)a1 defaultStr:(id)a2;
- (void).cxx_destruct;

@end
